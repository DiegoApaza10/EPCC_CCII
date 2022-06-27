//LISTA
#include <iostream>
#include <string>
#include <stdlib.h>
#include "nodo.h"
using namespace std;

template <class T>
class Lista{
	private:
		Nodo<T> *cabeza;
	public:
		Lista();
		~Lista();
		void eliminar();
		void invertir();
		void mostrar();
		void anadir(T);
		void buscar(T);
		void clear();
	
};

template<typename T>
Lista<T>::Lista()
{
	cabeza = NULL;
}

//anadir
template<typename T>
void Lista<T>::anadir(T dato){
	Nodo<T> *nuevo_nodo= new Nodo<T>(dato);
	Nodo<T> *aux=cabeza;
	if (cabeza==NULL){
		cabeza = nuevo_nodo;
	}else{
		while (aux->sgte != NULL){
			aux=aux->sgte;
		}
		aux->sgte=nuevo_nodo ;
	}
}
//Eliminar elemento
template<typename T>
void Lista<T>::eliminar()
{	
    Nodo<T> *aux= cabeza;
    T dato_=aux->dato;
    cabeza= cabeza->sgte;
    delete aux;
}



// Invertir la lista
template<typename T>
void Lista<T>::invertir(){
	Nodo<T> *prev = NULL;
	Nodo<T> *sgte = NULL;
	Nodo<T> *temp = cabeza;
	
	while(temp) {
		sgte = temp->sgte;
		temp->sgte = prev;
		prev = temp;
		temp = sgte;
	}
	cabeza = prev;
}
// Imprimir la Lista
template<typename T>

void Lista<T>::mostrar(){
	Nodo<T> *temp = cabeza;
	if (!cabeza) {
		cout << "La Lista esta vacia " << endl;
		
	} else {
		while (temp) {
			temp->print();
			if (!temp->sgte){cout << "NULL";}
			temp = temp->sgte;
			
		}
	}
	cout<<"\n";
}
//Buscar un elemento
template<typename T>
void Lista<T>::buscar(T dato_)
{
    Nodo<T> *aux = cabeza;
    int cont = 1;
    int cont2 = 0;
 
    while (aux) {
        if (aux->dato == dato_) {
            cout << "El dato se encuentra en la posicion: " << cont << endl;
            cont2++;
        }
        aux=aux->sgte;
        cont++;
    }
 
    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;
}
// Eliminar todos los nodos
template<typename T>
void Lista<T>::clear()
{
    cabeza->clear();
    cabeza= 0;
}

template<typename T>
Lista<T>::~Lista() {}