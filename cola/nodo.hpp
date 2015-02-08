// fichero nodo.hpp

#include "tipoDato.hpp"
class nodo {
	private:
		nodo* prev;
		nodo* next;
		tipoDato dato;
	public:
		nodo();
		nodo(tipoDato idato);
		nodo* getNext();
		nodo* getPrev();
		void setNext(nodo* t);
		void setPrev(nodo* t);
		tipoDato getDato();
		void setDato(tipoDato d);
		
		~nodo();
};
