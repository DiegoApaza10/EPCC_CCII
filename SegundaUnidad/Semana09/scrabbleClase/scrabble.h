#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;
class ficha{
	private:
		char letra;
		int valor;
	public:
		ficha(char,int);
		void imprimir();
		char get_letra();
		int get_valor();
		
		~ficha(){}
};
ficha::ficha(char _letra,int _valor){
	letra=_letra;
	valor=_valor;
}
void ficha::imprimir(){
	cout<<"Letra: "<<letra<<" ";
	cout<<"Valor: "<<valor<<endl;
}
int ficha::get_valor(){
	return valor;
}
char ficha::get_letra(){
	return letra;
}
/////////////////////////
class scrabble{
	private:
		string name;
		vector<ficha> coleccion;
	public:
		scrabble(string nombre,vector<ficha>);
		void mostrar();
		void usar_ficha();
		ficha getficha(int);
		~scrabble(){}
};
scrabble::scrabble(string nombre,vector<ficha> letras){
	name=nombre;
	coleccion=letras;
	random_device rd;
	shuffle(begin(coleccion),end(coleccion), rd);
}
void scrabble::mostrar(){
	cout<<"Nombre del jugador: "<<name<<endl;
	cout<<"Fichas disponibles: "<<endl;
	for(int i=0;i<7;i++){
		cout<<"("<<i+1<<")"<<" ";
		coleccion[i].imprimir();
	}
	cout<<endl;
}
ficha scrabble::getficha(int q){
	return coleccion[q];
}
void mostrarlista(vector<ficha> a){
	
	cout<<"LISTA ACTUAL:\n";
	cout<<"///////////////\n";
	for(int i=0;i<a.size();i++){
		cout<<a[i].get_letra();
	}
	cout<<"\n///////////////\n";
	cout<<endl;
}
void mostrarpuntaje(vector<ficha> a){
	cout<<"Puntaje total\n";
	int punt=0;
	for(int i=0;i<a.size();i++){
		punt=punt+a[i].get_valor();
	}
	cout<<"EL PUNTAJE ES: "<<punt;
	cout<<"\n///////////////\n";
}