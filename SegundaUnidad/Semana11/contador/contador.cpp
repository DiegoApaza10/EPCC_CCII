#include <iostream>
#include <vector>
#include <string>
#include "contador.h"
using namespace std;
void crear(){
	contador aux;
	cout<<"Objeto creado \n\n\n";
}
int main(){
	contador m(9);
	contador c(5);
	contador b(4);
	contador d;
	++b;
	++m;
	++d;
	b.valor();
	cout<<"Numero de objetos: "<<contador::cantidad<<endl<<endl;
	contador p;
	contador q;
	contador o;
	cout<<"Numero de objetos: "<<contador::cantidad<<endl<<endl;
	
}
