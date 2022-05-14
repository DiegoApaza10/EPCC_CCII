#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <map>
#include <cctype>

using namespace std;
void barra(int a){
	for(int i=0;i<a;i++){
		cout<<"*";
	}
	
}
void letterHist(string palabra1,map<char,int> contador1){
	for_each(palabra1.begin(),palabra1.end(), [](char & c){
		c = ::tolower(c);
	});
	for(char d:palabra1)
		contador1[d]++;
	cout<<"Resultado \n";
	map<char,int>::iterator it=contador1.begin();
	for(auto a:contador1){
		cout<<it->first<<' ';
		barra(it->second);
		cout<<"\n";
		it++;
	}
}
int main(){
	map<char,int> contador{};
	string palabra{},p;
	cout<<"Introduzca una frase \n";
	getline(cin,palabra);
	letterHist(palabra,contador);
	return 0;
}