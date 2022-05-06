#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int n,mult=0,mult1=0;
	cout<<"Ingrese la cantidad de numeros que desea ordenar ";cin>>n;
	int numero[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero: ";cin>>numero[i];
	}
	cout<<"listado: \n";
	for(int k=0;k<n;k++){
		cout<<numero[k]<<"-";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				mult=numero[i]*numero[j];
			}
			if(mult>mult1){
				mult1=mult;
			}
		}
	}
	cout<<"EL producto mayor es: "<<mult1;
	return 0;
}