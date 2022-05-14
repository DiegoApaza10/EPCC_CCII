#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;
string ordenar(string x){
	sort(x.begin(),x.end());
	return x;
}
bool anagram(string a,string b){
	return ordenar(a)==ordenar(b);
}

int main(){
	string a,b;
	cin>>a>>b;
	//cout<<ordenar(a)<<' '<<ordenar(b)<<endl;
	if(anagram(a,b)){
		 cout<<"Son anagramas "<<endl;
	}else{
		cout<<" No son anagrmas "<<endl;
	}
	return 0;
}
