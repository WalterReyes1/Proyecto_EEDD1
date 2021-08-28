#include <iostream>
#include "Lista.h"
#include "Nodos.h"
#include "TDA.h"
#include "TE.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	//TDA* T = new Lista();
	int live=0;
	int opcion  = 0;

	TDA* T = new Lista();
	cout<<"Iniciando prueba "<<endl;
	cout<<"Primero Agregamos: "<<endl;
	
	TE* t = new TE();
	t->setInt(1);
	T->agregar_e(t);
	
	
	TE* t2 = new TE();
	t2->setInt(2);
	T->agregar_e(t2);
	
	
	TE* t3 = new TE();
	t3->setInt(3);
	T->agregar_e(t3);
	
	
	TE* t4 = new TE();
	t4->setInt(4);
	T->agregar_e(t4);
	
	cout<<"------------------"<<endl;
	cout<<"Ahora imprimo"<<endl;
	T->Imprimir();
	cout<<"Ahora muestro finL"<<endl;
	cout<<"------------------"<<endl;
	T->finL();
	cout<<"Ahora Localizaremos el numero 2"<<endl;
	cout<<"------------------"<<endl;
	int y;
	y=T->localizar(t2);
	cout<<"El objeto "<<t2->getInt()<<" Esta localizado en la posicion "<<y<<endl;
	cout<<"------------------"<<endl;
	cout<<"Ahora usaremos Recuperar el objeto en la posicion 3"<<endl;
	cout<<"------------------------"<<endl;
	T->recupera(t3);
	cout<<"-------------"<<endl;
	cout<<"Ahora suprimiremos el numero 3"<<endl;
	cout<<"------------------------"<<endl;
	T->eliminar(t3);
	T->Imprimir();
	cout<<"-------------"<<endl;
	cout<<"Ahora usaremos siguiente desde la posicion 1"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<T->siguiente(1)<<endl;
	cout<<"------------"<<endl;
	cout<<"Ahora usaremos Anterior desde la posicion 2"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<T->anterior(2)<<endl;
	cout<<"------------"<<endl;
	cout<<"Ahora anularemos la lista"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Valor de retorno: "<<T->anula()<<endl;
	cout<<"Si quiere probar con Menu, descomente el codigo"<<endl;
	
/*	while(opcion!=11) {

		cout<<"1.Agregar"<<endl;
		cout<<"2.Imprimir_lista: "<<endl;//listo
		cout<<"3.FinL"<<endl;
		cout<<"4.Localizar"<<endl;
		cout<<"5.Recupera "<<endl;
		cout<<"6.Suprimir"<<endl;
		cout<<"7.Siguiente"<<endl;
		cout<<"8.Anterior"<<endl;
		cout<<"9.anula"<<endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {

				TE* te = new TE();
				int e;
				cout<<"Ingrese elemento: ";
				cin>>e;
				te->setInt(e);
				T->agregar_e(te);
				cout<<endl;
				break;
			}
			case 2: {
				T->Imprimir();
				cout<<endl;
				break;
			}
			case 3: {
				T->finL();
				cout<<endl;
				break;
			}
			case 4: {
				int x;
				TE* t = new TE();
				cout<<"Ingrese objeto a encontrar: "<<endl;
				cin>>x;
				t->setInt(x);
				int y = T->localizar(t);
				cout<<"El objeto "<<t->getInt()<<" Esta localizado en la posicion "<<y<<endl;
				cout<<endl;
				break;
			}
			case 5: {
				int x;
				cout<<"Ingrese posicion a extraer objeto: ";
				cin>>x;
				TE* ti = new TE();
				ti->setInt(x);
				T->recupera(ti);
				cout<<endl;
				break;
			}
			case 6: {
				int x;
				cout<<"Ingrese numero a Eliminar: ";
				cin>>x;
				TE* dato = new TE();
				dato->setInt(x);
				T->eliminar(dato);
				cout<<endl;
				break;
			}
			case 7: {
				int x;
				cout<<"Ingrese pos: ";
				cin>>x;
				int y= T->siguiente(x);
				if(y!=-1) {

					cout<<"El valor siguiente de la posicion "<<x<<" es: "<<y<<endl;
				} else {
					cout<<"El valor es indefinido"<<endl;
				}
				cout<<endl;
				break;
			}
			case 8: {
				int x;
				cout<<"Ingrese pos: ";
				cin>>x;
				int y = T->anterior(x);
				if(y!=-1) {
					cout<<"El valor anterior de la posicion "<<x<<" es: "<<y<<endl;
				} else {
					cout<<"El valor es indefinido"<<endl;
				}
				cout<<endl;
				break;
			}
			case 9: {
				cout<<endl;
				cout<<"<------------------->"<<endl;
				cout<<"Valor de retorno: "<<T->anula()<<endl;
				live =0;
				break;
			}

		}
	}*/


	return 0;

}


