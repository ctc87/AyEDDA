// fichero nodo.cpp

#include "nodo.hpp"

	nodo::nodo(): 
        next(NULL),
        prev(NULL),
        dato()
        {}

	
	nodo::nodo(tipoDato idato):
        next(NULL),
        prev(NULL),
        dato(idato)
        {}
	
	nodo* nodo::getNext(){
		return(next);
	}
	
	nodo* nodo::getPrev(){
		return(prev);
	}
	
	void nodo::setNext(nodo* t){
		next=t;
	}
	
	void nodo::setPrev(nodo* t){
		prev=t;
	}

	tipoDato nodo::getDato(){
		return(dato);	
	}
	
	void nodo::setDato(tipoDato d){
		this->dato=d;
	}
	
	nodo::~nodo(){}
