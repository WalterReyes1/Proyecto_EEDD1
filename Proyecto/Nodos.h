#ifndef NODOS_H
#define NODOS_H
#include <cstddef>
#include "TE.h"

using namespace std;

class Nodos {
	private:
	TE* objeto;
	
	 
	
	public:
	Nodos* sig_nodo;
	void blanquear_nodos();
	Nodos();
	Nodos(TE*);
	Nodos* getModo();
	TE* getObjeto();
};

#endif