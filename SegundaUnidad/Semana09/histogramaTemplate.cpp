#include <iostream>
#include <vector>
#include <algorithm>   
using namespace std;
/*Escriba una clase usando templates que tome una colección de elementos
como parámetro. La clase debe tener un método que devuelva el histograma
de los elementos de la colección. El método histograma debe aceptar un
parámetro que indique en cuantos intervalos agrupar a los elementos de la
colección. La clase debe tener además un método para imprimir el
histograma. Ejemplo: Dada la colección de enteros {10, 2, 9, 7, 5, 6, 1, 8, 8, 4}
y con el número de intervalos igual a 5, el histograma debe retornar 2 1 2 2 3
*/
template<class p>
class histograma{
	private:
		vector<p> coleccion;
		p inter;
	public:
		histograma(vector<p> a,p);
		void mostrar();
		void distribuir();
		~histograma(){}
};
template<class p>
histograma<p>::histograma(vector<p> a,p _inter){
	inter=_inter;
	for (int i=0; i<a.size(); i++)
    	coleccion.push_back(a[i]);
}
template<class p>
void histograma<p>::mostrar(){
	sort(coleccion.begin(),coleccion.end());
	for(int i = 0; i < coleccion.size(); i++)
        cout << coleccion.at(i) << " ";
}
template<class p>
void histograma<p>::distribuir(){
	vector<int> res;
	int cont=0;
	int val=0;
	sort(coleccion.begin(),coleccion.end());
	p v1=coleccion[0];
	p v2=v1+inter;
	for(int k= 0; k< coleccion.size(); k++){
		val=0;
		for(int i=0; i< coleccion.size(); i++){
			
			if(v1<=coleccion[i] and coleccion[i]<v2){
				cont++;
			}
			val++;
		}
		if(cont!=0){res.push_back(cont);}
		cont=0;
		v1=v2;
		v2=v1+inter;
	}
	for(int i = 0; i < res.size(); i++)
        cout << res.at(i) << " ";
}
int main(){
	//vector<int> b={10, 2, 9, 7, 5, 6, 1, 8, 8, 4,8,9,6,1};
	vector<int> b={8,9,5,6,8,10,11,21,21};
	vector<float> m={10.5, 2.3, 9.9, 7.8, 5, 5, 1, 8, 8, 4};
	histograma<int> a(b,3);
	histograma<float> n(m,2);
	cout<<"Lista original: \n";
	for(int i = 0; i < b.size(); i++)
        cout << b.at(i) << " ";
	cout<<endl;
	cout<<"Lista ordenada: \n";
	a.mostrar();
	cout<<endl;
	a.distribuir();
	cout<<endl;
	cout<<endl;
	/////////////////
	cout<<"Lista original: \n";
	for(int i = 0; i < m.size(); i++)
        cout << m.at(i) << " ";
	cout<<endl;
	cout<<"Lista ordenada: \n";
	n.mostrar();
	cout<<endl;
	n.distribuir();
	cout<<endl;
	//n.distribuir();
	system("PAUSE");
	return 0;
}