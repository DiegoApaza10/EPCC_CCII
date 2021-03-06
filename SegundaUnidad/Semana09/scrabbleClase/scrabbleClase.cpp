#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include <cstdlib>
#include "scrabble.h"
using namespace std;

int main(){
	vector<ficha>letras;
	vector<ficha>juego;
	ficha A('A',1);	ficha E('E',1);	ficha I('I',1);	ficha L('L',1);ficha N('N',1);ficha O('O',1);ficha R('R',1);ficha S('S',1);ficha T('T',1);ficha U('U',1);	ficha D('D',2);ficha G('G',2);ficha B('B',3);
	ficha C('C',3);ficha M('M',3);	ficha P('P',3);ficha F('F',4);ficha H('H',4);ficha V('V',4);ficha Y('Y',4);ficha Q('Q',5);ficha J('J',8);ficha X('X',8);ficha Z('Z',8);		
	letras.push_back(A);letras.push_back(B);letras.push_back(C);letras.push_back(D);letras.push_back(E);letras.push_back(F);
	letras.push_back(G);letras.push_back(H);letras.push_back(I);letras.push_back(J);letras.push_back(L);
	letras.push_back(M);letras.push_back(N);letras.push_back(O);letras.push_back(P);letras.push_back(Q);letras.push_back(R);
	letras.push_back(S);letras.push_back(T);letras.push_back(U);letras.push_back(V);letras.push_back(X);
	letras.push_back(Y);letras.push_back(Z);
	
	scrabble jugador_1("Timmy",letras);
	scrabble jugador_2("Juan",letras);
	
	int cont=1;
	int num;
	while(cont!=0){
		if(cont==1){
			cout<<"Turno del jugador 1 \n";
			jugador_1.mostrar();
			cout<<endl;
			cout<<"Elija una ficha (del 1 al 7) \n";
			cin>>num;
			if(num<1 or num>7){
				while(num<1 || num>7){
					cout<<"Ingrese un numero valido \n";
					cin>>num;
				}
			}
			juego.push_back(jugador_1.getficha(num-1));
			cout<<endl;cout<<endl;
		
			system("cls");
			mostrarlista(juego);
			cont++;
		}
		if(cont==2){
			cout<<"Turno del jugador 2 \n";
			jugador_2.mostrar();
			cout<<endl;
			cout<<"Elija una ficha (del 1 al 7) \n";
			cin>>num;
			if(num<1 or num>7){
				while(num<1 || num>7){
					cout<<"Ingrese un numero valido \n";
					cin>>num;
				}
			}
			juego.push_back(jugador_2.getficha(num-1));
			cout<<endl;cout<<endl;
			system("cls");
			mostrarlista(juego);
			cont--;
		}
		mostrarpuntaje(juego);
	}
}