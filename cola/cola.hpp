// fichero cola.hpp

#include "tipoDato.hpp"
#include "nodo.hpp"
class cola {
	private:
		unsigned numElementos;
		nodo*	 primero;
		nodo*	 ultimo;

		bool vacia();
	public:
		cola();
		
		void encolar(nodo* t);

		nodo* desencolar();

		void invertir();
		
		void colarPrimeraPos(unsigned posActual);
		
		void imprimirCola();
		
		~cola();
};








