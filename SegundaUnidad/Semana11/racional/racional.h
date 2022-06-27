#include <iostream>
#include <vector>
using namespace std;

class racional{
	private:
		int x,y;
	public:
		/*
		a) Proporcione un constructor que tome dos argumentos
		correspondientes al numerador y denominador. El primer argumento
		debe ser cero por defecto, el segundo argumento debe ser uno por
		defecto.
		*/
		racional(){x=0,y=1;};
		racional(int x,int y){this->x=x;this->y=y;}
		int getX(){return x;}
		int getY(){return y;}
	
		friend istream &operator >> (istream &input,racional &p);
		
		
		void mostrar(){
			cout<<"\n Resultado: "<<x<<"/"<<y;
		}
		/*
		b) La clase debe proporcionar un constructor copia, operador de
			asignación.
		*/
		racional(const racional& p);
		

		void reducir();
		~racional(){}
};

racional::racional(const racional&p){
	x=p.x;
	y=p.y;
}

/*
g) Mantenga el número racional es su forma reducida, es decir, el
numerador y el denominador son coprimos.
*/
void racional::reducir(){
	for(int i=9;i>=1;i--){
		if(x%i==0 and y%i==0){
			x=x/i;
			y=y/i;
		}
	}
	
}
/*
	f)Implemente el operador de inserción para leer un número racional en
	con el formato como “-15/23”.*/
istream &operator >> (istream &input,racional &p){
	input>>p.x>>p.y;
	return input;
}
/*
c) Proporcione los operadores de suma, resta, multiplicación y división.
*/

racional& operator + (racional &a,racional &b){
	return *(new racional(a.getX()*b.getY()+b.getX()*a.getY(),(a.getY()*b.getY())));
}
racional& operator - (racional &a,racional &b){
	return *(new racional(a.getX()*b.getY()-b.getX()*a.getY(),(a.getY()*b.getY())));
}
racional& operator * (racional &a,racional &b){
	return *(new racional(a.getX()*b.getX(),a.getY()*b.getY()));
}
racional& operator /(racional &a,racional &b){
	return *(new racional(a.getX()*b.getY(),a.getY()*b.getX()));
}

/*
d) Proporcione los operadores +=, -=, *= y /=.
*/
racional& operator +=(racional &a,racional &b){
	a=a+b;
	return a;
}
racional& operator -=(racional &a,racional &b){
	a=a-b;
	return a;
}
racional& operator /=(racional &a,racional &b){
	a=a/b;
	return a;
}
racional& operator *=(racional &a,racional &b){
	a=a*b;
	return a;
}			



