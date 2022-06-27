#include <iostream>
#include "cuadratico.h"
using namespace std;
int main(){
	cuadratico a(5,0,9);
	cuadratico p(5,65,9);
	cuadratico b(p);
	cout<<b;
	cout<<a;
	
	return 0;
}