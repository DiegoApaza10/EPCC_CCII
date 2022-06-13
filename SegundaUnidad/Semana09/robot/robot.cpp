#include <iostream>
#include <random>
#include <string>
#include <algorithm>
#include <chrono>
#include <vector>
#include "robot1.h"
using namespace std;

int main(){
	for(int i=0;i<100;i++){
		robot a;
   		a.encendido();
   		a.reseteo();
	}
    return 0;
}
	