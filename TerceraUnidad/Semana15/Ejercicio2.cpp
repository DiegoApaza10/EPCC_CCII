#include <iostream>
using namespace std;

float sumafi(int a, float b) {
	return a + b;
}
double restalf(float a, double b) {
	return a - b;
}
long multiplicaid(int a, long b) {
	return a * b;
}

template<typename T,typename N>
T funcion(T(*p)(N,T),N a,T b){
	return p(a,b);
}

int main(){
	cout<<funcion(sumafi,5,4.0f)<<endl;
	cout<<funcion(restalf, 4.0f, 5.0)<<endl;
	cout<<funcion(multiplicaid, 4, 5L);
	
	return 0;
}