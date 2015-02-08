// fichero pila.hpp

#include "tipoDato.hpp"
#include "nodo.hpp"
class pila {
	private:
		unsigned numElementos;
		nodo*	 top;
		nodo*	 ultimo;

		bool vacia();
	public:
		pila();
		
		void push(nodo* t);

		nodo* pop();

		void invertir();
		
		void imprimirpila();
		
		~pila();
};








