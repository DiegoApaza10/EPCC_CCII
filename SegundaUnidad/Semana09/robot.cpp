#include <iostream>
#include <random>
#include <string>
#include <algorithm>
#include <chrono>
#include <vector>
#include <sstream>
using namespace std;

class robot{
	private:	
		vector<pair<string,int>> nombre;
	public:
		void encendido();
		void reseteo();
};

void robot::reseteo(){
	while(!nombre.empty()){
		nombre.pop_back();
	}
	cout<<"Nombre eliminado \n";
	encendido();
}

void robot::encendido(){
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	
	vector<string> letras={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	shuffle(begin(letras), end(letras), default_random_engine(seed));
	random_device rd;
    default_random_engine eng(rd());
    uniform_int_distribution<int> distr(100, 999);
    int a=distr(eng);
	string b=letras[0]+letras[1]+letras[2];
	pair<string,int> nom;
	nom.first=b;
	nom.second=a;
	nombre.push_back(nom);
	cout<<"Nomre del robot: "<<nombre.at(0).first<<nombre.at(0).second<<endl;
}

int main(){
	for(int i=0;i<100;i++){
		robot a;
   		a.encendido();
   		a.reseteo();
	}
    return 0;
}
	