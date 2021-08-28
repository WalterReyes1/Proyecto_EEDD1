#include "Nodos.h"
Nodos::Nodos(TE* _elemento){
  this->objeto =_elemento;
  this->sig_nodo = NULL;
}
Nodos::Nodos(){
	this->sig_nodo=NULL;
}
TE* Nodos::getObjeto(){
	return this->objeto;
}
void Nodos::blanquear_nodos(){
	this->objeto->setInt(0);
	delete this->objeto;
	
}