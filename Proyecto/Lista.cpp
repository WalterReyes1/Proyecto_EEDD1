#include "Lista.h"
int c;
int l;
int recu;
bool v;
bool v2;
int cont = 0;
Lista::Lista() {

}

void Lista::agregar_nodo(Nodos *n, TE* dato) {
	if (n->sig_nodo == NULL) {
		n->sig_nodo = new Nodos(dato);

	} else {
		this->agregar_nodo(n->sig_nodo, dato);

	}
}

void Lista::agregar_e(TE* dato) {

	if (this->cabeza == NULL || cont==0) {
		this->cabeza = new Nodos(dato);
		v2=true;

		cont++;
	} else {

		this->agregar_nodo(this->cabeza,dato);

		v2=false;
	}
	v=true;
}

void Lista::ImprimirInterno(Nodos* n) {
	if (n != NULL) {
		cout  << n->getObjeto()->getInt() << endl;
		this->ImprimirInterno(n->sig_nodo);
	}
}

void Lista::Imprimir() {
	cout << "Imprimiendo " << endl;
	this->ImprimirInterno(this->cabeza);
}

void Lista::recursivo_finL(Nodos*n) {

	if (n != NULL) {
		this->recursivo_finL(n->sig_nodo);
		c++;
	}

}

void Lista::finL() {
	c=0;
	this->recursivo_finL(this->cabeza);
	if(v==true) {
		c++;
	}
	
		cout<<"FinL = "<<c<<endl;
	
}

int Lista::localizar(TE* x) {
	l=0;
	localizar_recursivo(this->cabeza,x);
	return l;
}

void Lista::localizar_recursivo(Nodos* n,TE* x) {
	if (n != NULL) {
		if(n->getObjeto()->getInt()!=x->getInt()) {
			this->localizar_recursivo(n->sig_nodo,x);
			l++;

		}


	}
}

void Lista::recupera(TE* x) {
	recu=0;

	this->recupera_recursivo(this->cabeza,x);

}
void Lista::recupera_recursivo(Nodos* n, TE* x) {
	if(n!=NULL) {
		

		if(x->getInt()== recu) {

			cout<<"El objeto en la posicion: "<<x->getInt()<<" es igual a : "<<n->getObjeto()->getInt()<<endl;
		} else {

			recu++;
			this->recupera_recursivo(n->sig_nodo,x);
		}
	}
}
void Lista::eliminar_Recursivo(Nodos* n, TE* dato) {
	if (n == NULL) {
		return;
	}
	if (n->getObjeto()->getInt() == dato->getInt() && n == this->cabeza) {
		Nodos* temporal = this->cabeza;
		if (this->cabeza->sig_nodo != NULL) {
			this->cabeza = this->cabeza->sig_nodo;

			delete temporal;
		} else {
			this->cabeza = NULL;
		}

	}
	if (n->sig_nodo != NULL && n->sig_nodo->getObjeto()->getInt() == dato->getInt()) {
		Nodos* temporal = n->sig_nodo;
		if (n->sig_nodo != NULL) {
			n->sig_nodo = n->sig_nodo->sig_nodo;
		}
		delete temporal;
	} else {
		this->eliminar_Recursivo(n->sig_nodo, dato);
	}
}
void Lista::eliminar(TE* dato) {
	this->eliminar_Recursivo(this->cabeza, dato);
}
int Lista::siguiente(int x) {
	int retval;
	c=0;
	this->recursivo_finL(this->cabeza);
	c++;
	
	if(x>=c || x<0) {
		retval =-1;
	} else {
		retval=x+1;
	}
	return retval;

}
int Lista::anterior(int x) {
	c=0;
	this->recursivo_finL(this->cabeza);
	c++;
	int retval;
	
	if( x>c || x<=1) {
		retval=-1;
	} else {
		retval=x-1;
	}

	return retval;

}
int Lista::anula() {
	this->anula_recursivo(this->cabeza);
	return 1;
}
void Lista::anula_recursivo(Nodos* n) {


	if(n==NULL) {

	} else {
		if ( n == this->cabeza) {
			Nodos* temporal = this->cabeza;
			if (this->cabeza->sig_nodo != NULL) {
				this->cabeza = this->cabeza->sig_nodo;
				delete temporal;
				this->anula_recursivo(this->cabeza);
			} else {
				this->cabeza = NULL;
			}
		}

	}


}











