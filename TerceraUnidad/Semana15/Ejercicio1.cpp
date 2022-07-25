#include <iostream>
using namespace std;


void multiplicar(int x[][4][2],int n){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<2;k++){
				x[i][j][k]*=n;
			}
		}		
	}
}

void mostrar(int x[][4][2]){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			for(int k=0;k<2;k++){
				cout<<x[i][j][k]<<" || ";
			}
			cout<<"\t";
		}
		cout<<"\n\n";		
	}
}
int main(){
	
	
	int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
					{{10, 11}, {13, 14}, {16, 17}, {1, 2}},
					{{19, 20}, {22, 23}, {25, 26}, {1, 2}}};
	int **puntero=new int*[sizeof(x)];

	mostrar(x);
	cout<<"\n\n";
	multiplicar(x,5);
	mostrar(x);			
	return 0;
}
