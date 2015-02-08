

// fichero vector.cpp

#include "vector.hpp"

	vector::vector():
	dato(NULL),
	numPos(0)
	{
	
	}

	vector::vector(unsigned sz):
        dato(NULL),
        numPos(sz)
	{
                dato = new tipoDato[sz];
		for(unsigned i = 0; i<sz; i++)
			dato[i] = 0;
	} 

	unsigned vector::size(){
		return(numPos);
	}
	
	vector::vector(const vector &vect): dato(vect.dato), numPos(vect.numPos)
	{}
	

	void vector::reSize(unsigned sz) {
		vector aux(sz);
		unsigned newSize = sz >= numPos ? numPos : sz;
		for(unsigned i = 0; i<newSize; i++)
			aux[i]=dato[i];	
		delete [] dato;
		dato = NULL;
		dato = new tipoDato[sz];
		numPos = sz;
		for(unsigned i = 0; i<numPos; i++)
                	dato[i]=aux[i];
	}

	bool vector::empty() {
		return(numPos == 0);
	}

	vector& vector::operator =(vector vect){
		numPos = vect.numPos;
		delete[] dato;
		dato = new tipoDato[vect.numPos];
		return *this;	
	}
	
	
	
	vector vector::operator +(const vector& explicito){
		vector aux2;
		aux2.reSize(numPos + explicito.numPos);
		for(unsigned i = 0; i<aux2.numPos; i++) {
			if(i<numPos)
				aux2[i] = dato[i];
			else
				aux2[i] = explicito.dato[i - numPos];
		} 
		return(aux2);
	}	


        
        tipoDato& vector::operator [](const int nIndex) {
		if(numPos>=nIndex) {
			return(dato[nIndex]);
		} 
	}
	    
	  
	vector::~vector() {
		if(dato != NULL){
			delete [] dato;
			dato = NULL;
		}
	}
