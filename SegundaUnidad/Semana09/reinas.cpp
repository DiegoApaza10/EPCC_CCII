#include <string>     
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
using namespace std;

void mostrar(char valor,int filas,int columnas, vector<vector <char>> V){
	for_each(V.begin(),V.end(),[](const auto & fila){
    	for_each(fila.begin(),fila.end(),[](const auto & valor){
    		cout<<"|" <<valor<<"|";	
		});
		cout<<endl;
		cout<<endl;
	});
	cout << endl;
}
void ubicar(char valor,int filas,int columnas,vector<vector <char>> V){
	bool b;
	while(b==false){
		int pos1 =rand() % 8 ;
		int pos2 =rand() % 8 ;
		int pos3 =rand() % 8 ;
		int pos4 =rand() % 8 ;
		if(pos1!=pos3 or pos2!=pos4){
			cout<<"POSICION de RB: "<<"("<<pos1+1<<","<<pos2+1<<")"<<endl;
			V[pos1][pos2]='B';
			cout<<"POSICION de RN: "<<"("<<pos3+1<<","<<pos4+1<<")"<<endl;
			V[pos3][pos4]='N';
			b=true;
		}else{b=false;}
	}
	mostrar(valor,filas,columnas,V);
}
int main(){
	srand(std::time(nullptr));
	char val='_';
	int fil=8;
	int col=8;
	char res;
    vector<vector <char>> Vect(fil,vector<char>(col,val));
    for(int i=0;i<10;i++){
    	ubicar(val,fil,col,Vect);
    	cout<<"\n Se pueden atacar entre si? (Y/N)\n ";
    	cin>>res;
    	if(res!='y' and res!='n' and res!='Y' and res!='N'){
    		while(res!='y' and res!='n' and res!='Y' and res!='N'){
    			cout<<"\n Ingrese una respuesta valida  (Y/N) ";cin>>res;
    			cout<<endl;
			}
		}
		cout<<endl;
		cout<<endl;
		cout<<endl;
	}
    return 0;
}