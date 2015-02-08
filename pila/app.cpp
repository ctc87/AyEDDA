// fichero app.cpp

#include "pila.hpp"
#define MAX 20 
int main(void){
	
	pila c;
	for(unsigned i = 0; i<MAX; i++){
		nodo* n = new nodo;
		n->setDato(i+1);
		c.push(n);
	}
	c.imprimirpila();
	c.invertir();
	c.imprimirpila();
	c.invertir();
	c.imprimirpila();
	nodo* n = new nodo;
	n -> setDato(100);
	c.push(n);
	c.imprimirpila();
	n = c.pop();
	c.imprimirpila();



}

