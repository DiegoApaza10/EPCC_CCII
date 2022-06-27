#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

template<typename T>

string to_string(const T& s){
	stringstream ss{s};
	string str=ss.str();
	return str;
}
template<typename T>

void to_string(const vector<T>& v){
	for ( auto i = v. cbegin () ; i != v. cend () ; ++ i ){
		cout <<to_string(*i);
	}
}

int main(){
	int a=56;
	vector<int> b{5,6,9,7,6};
	cout<<to_string(a)<<endl;
	to_string(b);
}

