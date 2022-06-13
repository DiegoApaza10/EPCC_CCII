#include <string>     
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include "reina.h"
using namespace std;

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