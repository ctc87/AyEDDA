// fichero app.cpp

#include "cola.hpp"
#define MAX 20 
int main(void){
	
	cola c;
	for(unsigned i = 0; i<MAX; i++){
		nodo* n = new nodo;
		n->setDato(i+1);
		c.encolar(n);
	}
	c.imprimirCola();
	c.invertir();
	c.imprimirCola();
	c.invertir();
	c.imprimirCola();
	nodo* n = new nodo;
	n -> setDato(100);
	c.encolar(n);
	c.imprimirCola();
	n = c.desencolar();
	c.imprimirCola();
	c.colarPrimeraPos(9);
	c.imprimirCola();

}

