

#include <iostream>
#include <math.h>

using namespace std;
int main(){
	cout<<"* ";
	for(int k=1;k<=10;k++){
		cout<<k<<" ";
	}
	cout<<"\n";
	cout<<"----------------------------";
	cout<<"\n";
	for(int i=1;i<=10;i++){
		cout<<i<<"|  ";
		for(int j=1;j<=10;j++){
			cout<<i*j<<"  ";
		}
		cout<<"\n";	
	}
	return 0;
}
