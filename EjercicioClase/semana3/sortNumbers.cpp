#include <iostream>
#include <math.h>

using namespace std;

//Your job is to write a program that reads integers from the
//standar input, sorts them into ascending order, and then
//prints the sorted numbers, one per line.

int main(){
	int n,aux;
	cout<<"Ingrese la cantidad de numeros que desea ordenar ";cin>>n;
	int numero[n];
	for(int i=0;i<n;i++){
		cout<<"Ingrese el numero: ";cin>>numero[i];
	}
	cout<<"Orden original: \n";
	for(int k=0;k<n;k++){
		cout<<numero[k]<<"-";
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(numero[j]>numero[j+1]){
				aux=numero[j];
				numero[j]=numero[j+1];
				numero[j+1]=aux;
			}
		}
	}
	
	cout<<"Nuevo orden: \n";
	for(int i=1;i<=n;i++){
		cout<<numero[i]<<"-";
	}
	return 0;
}