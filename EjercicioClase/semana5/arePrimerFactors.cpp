#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <vector>
using namespace std;

bool primo(int n){
	int cont1=0;
	bool a;
	cout<<endl<<n;
	for(int i=1;i<=n;i++){
		if(n%i==0){cont1++;}
	}
	if(cont1>2){
		a=false;
		return a;
	}
	else{
		a=true;
		return a;
	}
}

void arePrimeFactors(int n,vector <int> a){
	int cont=0,prod=1;
	vector <bool> c;
	for ( auto i = a.begin () ; i != a.end () ; ++ i ){
		prod=prod**i;
	}
	for (auto  i = c.begin () ; i != c.end () ; ++ i ){
		if(primo(*i)==true){
			cont=cont+1;
			cout<<cont;
		}	
	}
	cout<<cont;
	if(cont==a.size() && prod==n){
		cout<<"Son primos y "<<n<<" es producto de esos primos";
	}else{cout<<"FALSE";}
}

int main(){
	int num,a;
	vector <int> v;
	cout<<"Ingrese un numero ";cin>>num;
	for(int i=0;i<3;i++){
		cout<<"Ingrese un numero entero para ver si es primo ";cin>>a;
		v.push_back(a);
	}
	cout<<num<<" es producto de estos numeros?: ";{
	for ( auto i = v.begin () ; i != v.end () ; ++ i )
		cout << *i << " ";
	}
	cout<<"\n";
	arePrimeFactors(num,v);
	return 0;
}