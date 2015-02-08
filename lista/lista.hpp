// fichero lista.hpp
#include "nodo.hpp"
class lista{
	private:
		unsigned numNodos;
		nodo* inicio;
		nodo* fin;			
		bool vacia();
	public:
	
	lista();
	
	lista(nodo* t);
	
	nodo* extrInicio();
	
	void insertInicio(nodo* t);
	
	nodo* extrFin();
	
	void insertFin(nodo* t);

	~lista();
	
	nodo* iterador(unsigned n);

	nodo* iteradorInv(unsigned n);

	void imprimirLista();
};
