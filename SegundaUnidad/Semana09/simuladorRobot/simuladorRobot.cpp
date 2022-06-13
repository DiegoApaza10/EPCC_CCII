#include <iostream>
#include <cstring>
#include <vector>
#include "robotmov.h"
using namespace std;
int main(){
    vector<char>inst={'D','A','A','I','A','I'};
    simulador_robot<char> robot(inst);
    robot.moverse();
    return 0;
}