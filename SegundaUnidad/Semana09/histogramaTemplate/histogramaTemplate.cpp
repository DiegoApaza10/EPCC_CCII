#include <iostream>
#include <vector>
#include <algorithm>   
#include "histograma.h"
using namespace std;

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