//MAIN
#include <iostream>
#include "pila.h"

using namespace std;


//copiar a otra lista

int main(){
	Lista<int> lista1;
	
	lista1.anadir(1);
	lista1.anadir(5);
	lista1.anadir(4);
	lista1.anadir(3);
	lista1.anadir(2);
	lista1.invertir();
	cout<<"Busco al 4\n";
	lista1.buscar(4);
	lista1.mostrar();
	//LA CARACTERISTICA DE LA PILA ES 
	//ELIMINAR PRIMERO AL ULTIMO QUE SALIO
	cout<<"ELIMINO UN NODO\n";
	lista1.eliminar();
	lista1.mostrar();
	cout<<"Posicion actual del 4\n";
	lista1.buscar(4);
	lista1.clear();
	lista1.mostrar();
	return 0;
}
