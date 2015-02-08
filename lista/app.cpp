// fichero app.cpp

#include "lista.hpp"
#define MAX 22 
int main(void){
	
	lista l;
	for(unsigned i = 0; i<MAX; i++){
		nodo* n = new nodo;
		n->setDato(rand() % 10+i);
		l.insertFin(n);
	}
	l.imprimirLista();
}
