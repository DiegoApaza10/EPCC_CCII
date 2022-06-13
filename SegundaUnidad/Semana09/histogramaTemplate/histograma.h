#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
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