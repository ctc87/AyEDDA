//listas enlazadas pilas y colas
//inserccon eliminacion y busqueda


//vector:
//operaciones aritmrticas


// fichero vector.hpp  
#include "tipoDato.hpp"
#include <cstring> // cabcera para el metodo memcopy()
#include <cstdio> // cabecera con las funciones básicas del SO.
#include <iostream> // cabecera de I/O 
using namespace std;
 
class vector {
	
	// atributos privados de la clase
	private:
		unsigned numPos;
		tipoDato* dato; 
	
	//Metodos publicos de la clase

	public:
		vector();

		vector(unsigned sz);
		
		vector(const vector &vector);
		
		unsigned size();
		
		void reSize(unsigned sz);
		
		bool empty();
		
		vector& operator =(vector vect);

		vector operator +(const vector& explicito);
		
		tipoDato& operator [](const int nIndex);
		
		~vector();

};
