#include <iostream>
#include <cmath>

using namespace std;

void countDown(int n){
    if (n > 0){
    	sleep(1);
    	cout<<n<<endl;
   		countDown(n+1);	
    }
}
int main(){
	int num;
	cin >> num;cout<<endl;
	countDown(num);
	return 0;
}