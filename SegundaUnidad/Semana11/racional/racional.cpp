#include <iostream>
#include <vector>
#include "racional.h"
using namespace std;

int main(){

	racional a(11,5);
	racional b(3,7);
	racional c(4,5);
	racional f(4,9);
	racional g(7,10);
	racional d(g);
	racional p(48,12);	
	p.reducir();
	p.mostrar();
	d.mostrar();
	d=a+b+c;
	d.mostrar();
	d=a*b;
	d.mostrar();
	d=a-b;
	d.mostrar();
	d=a/b;
	d.mostrar();
	
	a+=b;
	a.mostrar();
	b-=a;
	b.mostrar();
	g*=f;
	g.mostrar();
	f/=g;
	f.mostrar();
	cout<<"\n\nIngrese la fraccion: \n";
	racional fraccion;
	cin>>fraccion;
	fraccion.mostrar();
	return 0;
}
