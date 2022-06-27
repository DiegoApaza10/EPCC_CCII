//NODO

#include <iostream>
using namespace std;

template <class T>

class Nodo
{
	public:
		Nodo(T);
		Nodo *sgte;
		void print();
		void clear();
		~Nodo();
		T dato;
};

// Constructor por parámetro
template<typename T>
Nodo<T>::Nodo(T dato_){
	dato = dato_;
	sgte = NULL;
}

// Imprimir un Nodo
template<typename T>
void Nodo<T>::print(){
	cout <<dato<<"->" ;
}

template<typename T>
void Nodo<T>::clear(){
    if (sgte)
        sgte->clear();
    delete this;
}
template<typename T>
Nodo<T>::~Nodo() {}