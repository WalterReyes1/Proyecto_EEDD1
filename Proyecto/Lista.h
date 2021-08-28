#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "Nodos.h"
#include <cstddef>
#include "TE.h"
#include "TDA.h"
using namespace std;

class Lista : public TDA {
	private:
		Nodos* cabeza = new Nodos();
	
	public:
		Lista();
		
		void agregar_nodo(Nodos*, TE*);
		void Imprimir();
		void agregar_e(TE*);
		void ImprimirInterno(Nodos*);
		void finL();
		void recursivo_finL(Nodos*);
		int localizar(TE*);
		void localizar_recursivo(Nodos*,TE*);
		void recupera( TE*);
		void recupera_recursivo(Nodos* n,TE*);
		void eliminar(TE*);
		void eliminar_Recursivo(Nodos*,TE*);
		int siguiente(int);
		int anterior(int);
		int anula();
		void anula_recursivo(Nodos* n);
};

#endif