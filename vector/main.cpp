// fichero main.cpp
#include "vector.hpp"

int main(void){

	vector v,f,j;
	cout << "Tamaño del vector " << v.size()<<"."<<endl;
	v.reSize(6);
        f.reSize(6);
	j.reSize(6);
	cout << "Tamaño del vector " << v.size()<<"."<<endl;
	for(unsigned i = 0; i<v.size(); i++){
		v[i]=7;
		j[i]=i;
	}
	for(unsigned i = 0; i<f.size(); i++){
                f[i]=i;
        }
	if(v.empty())
		cout<<"vacio"<<endl;
	else
		cout<<"no vacio"<<endl;
        if(f.empty())
                cout<<"vacio"<<endl;
        else
                cout<<"no vacio"<<endl;
	vector r = v + f;
        cout << "tamaño r " << r.size() <<endl;
	cout << "f: " << endl;
        for(unsigned i = 0; i<f.size(); i++){
		cout << "f[" << i << "] = " << f[i] << endl;
	}
	cout << "v: " << endl;
        for(unsigned i = 0; i<v.size(); i++){
                cout << "v[" << i << "] = " << v[i] << endl;
        }
	cout << "suma f+v: " << endl;
        for(unsigned i = 0; i<r.size(); i++){
                cout << "r[" << i << "] = " << r[i] << endl;
        }
        r.reSize(8);
	cout << "suma f+v despues del resize menor: " << endl;
        for(unsigned i = 0; i<r.size(); i++){
                cout << "r[" << i << "] = " << r[i] << endl;
        }

}
