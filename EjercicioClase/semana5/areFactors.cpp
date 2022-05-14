#include <iostream>
#include <fstream>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;

void areFactors(int n,vector <int> a){
	int cont=0;
	vector <bool> c;
	for ( auto i = a.begin () ; i != a.end () ; ++ i ){
		if(n%*i==0){c.push_back(true);}
		else(c.push_back(false));
	}
	for (auto  i = c.begin () ; i != c.end () ; ++ i ){
		if(*i==true){cont++;}
	}
	if(cont==a.size()){
		cout<<"TRUE";
	}else{cout<<"FALSE";}
}
int main(){
	int num,a;
	vector <int> v;
	cout<<"Ingrese un numero entero para verificar la disibilidad ";cin>>num;
	for(int i=0;i<5;i++){
		cout<<"Ingrese un numero entero ";cin>>a;
		v.push_back(a);
	}
	cout<<num<<" es divisible entre estos numeros: ";{
	for ( auto i = v.begin () ; i != v.end () ; ++ i )
		cout << *i << " ";
	}
	cout<<"\n";
	areFactors(num,v);
	return 0;
}