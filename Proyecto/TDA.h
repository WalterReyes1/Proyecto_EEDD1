#ifndef TDA_H
#define TDA_H
#include "TE.h"
#include "Nodos.h"


class TDA {
	public:
		TDA();
		virtual void  agregar_nodo(Nodos*, TE* )=0;
		virtual void Imprimir()=0;
		virtual void agregar_e(TE*)=0;
		virtual void ImprimirInterno(Nodos*)=0;
		virtual void finL();
		 virtual void recursivo_finL(Nodos*)=0;
		 virtual void  localizar_recursivo(Nodos*,TE*)=0;
		 virtual int localizar(TE*)=0;
		 virtual void recupera(TE*)=0;
		 virtual void recupera_recursivo(Nodos* n,TE*)=0;
		 virtual void eliminar(TE*)=0;
		 virtual void eliminar_Recursivo(Nodos*,TE*)=0;
		 virtual int siguiente(int)=0;
		 virtual int anterior(int)=0;
		 virtual int anula();
		 virtual void anula_recursivo(Nodos*)=0;
		 
};

#endif