#include <iostream>
#include "tiempo.h"
using namespace std;
int main(){
	tiempo a(13,0,30);
	tiempo b(0,0,35);
	tiempo p(13,0,3);
	tiempo q(0,0,2);
	tiempo u(4,5,9);
	tiempo v(4,5,9);
	cout<<a;
	cout<<endl;
	cout<<endl;
	
	tiempo c=a+b;
	cout<<c;
	
	if(a>b){
		cout<<"a es mayor que b \n";
	}
	if(a<b){
		cout<<"a es menor que b \n";
	}
	if(p<=q){
		cout<<"\nq es menor o igual que p\n";
	}
	if(p>=q){
		cout<<"\np es mayor o igual que q\n";
	}
	if(u==v){
		cout<<"\nu es igual a v\n";
	}
	if(u!=p){
		cout<<"\nu es diferente de p\n";
	}
	
	return 0;
}