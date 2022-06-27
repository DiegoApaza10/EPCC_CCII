#include <iostream>
using namespace std;
class cuadratico{
	private:
		double a,b,c;
	public:
		cuadratico();
		cuadratico(double,double,double);
		cuadratico(const cuadratico&);
		
		friend ostream &operator<<(ostream &output,cuadratico &p);
		
		~cuadratico(){}
};

cuadratico::cuadratico(){
	a=0;
	b=0;
	c=0;
}

cuadratico::cuadratico(double a,double b,double c){
	this->a=a;
	this->b=b;
	this->c=c;
}
cuadratico::cuadratico(const cuadratico& obj){
	a=obj.a;
	b=obj.b;
	c=obj.c;
}

ostream &operator << (ostream &output,cuadratico &p){
	cout<<"Ingrese una variable real: ";
	char x;
	cin>>x;
	output<<"Clase Cuadratica: \n";
	output<<"Funcion f("<<x<<"): ";
	if(p.a!=0){output<<p.a<<x<<"^2 + ";}
	if(p.b!=0){output<<p.b<<x<<" + ";}
	if(p.c!=0){output<<p.c<<endl;}
	cout<<"\n\n";
	return output;
}


