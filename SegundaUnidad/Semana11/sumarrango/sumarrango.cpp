#include <iostream>
using namespace std;
//cuatro argumentos: un array de tipo T,
//un indice de inicio, un indice de finalizacion (inclusivo) y un valor inicial opcional.

template <typename T>
T sum(const T* array, int n,unsigned N,int vi=0) {
    T sum{0};
    for (int i=n; i<= N; ++i){
    	sum+= array[i];
	}
       
    return sum+vi;
}


int main(){
	int arreglo[]= {2, 4, 7, 8,9,10,13,11,20};
    double arreglo1[]= {2.0, 4.5, 7.0,4,0.9,6.3,5.7,8.9,6.6};
    cout<<sum(arreglo,0,3,9)<<endl;
    cout<<sum(arreglo,0,3,)<<endl;
    cout<<sum(arreglo1,0,9,2);<<endl;
     cout<<sum(arreglo1,0,9,);<<endl;
	return 0;
}