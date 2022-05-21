#include <iostream>
#include <cmath>
using namespace std;

void toBinary(int n){
	if(n<2){cout<<n;}
	else{
		toBinary(n/2);
		cout<<n%2;
	}
}
int main(){
	int num;
	cin >> num;

    cout << "decimal: "<<num<<endl;
    cout << "binary : ";
	toBinary(num);
	return 0;
}