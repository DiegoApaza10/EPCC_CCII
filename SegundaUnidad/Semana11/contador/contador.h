#include <iostream>
using namespace std;

class contador{
	private:
		int cont;
	public:
		static int cantidad;contador();
		contador(int a);
		contador& operator ++();
		void valor();           
	
		~contador(){}		
};

int contador::cantidad=0;
contador::contador(int cont){
	this->cont=cont;
	cantidad++;
}
contador::contador(){
	cont=0;
	cantidad++;
}
contador& contador::operator++(){
	this->cont++;
	return *this;
}
void contador::valor(){
	cout<<"Valor actual: "<<cont<<"\n";
}


