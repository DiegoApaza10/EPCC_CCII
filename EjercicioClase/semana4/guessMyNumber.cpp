#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <random>
#include <stdio.h>
#include <stdlib.h>
/*
Exercise 3. guessMyNumber.cpp
The goal of this exercise is to program a Guess My Number game.
*/
int main(){
	srand(time(NULL));
	int a,aux;
	std::cout<<"I'm thinking of a number between 1 and 100 (including both) \n Can you guess what it is? \n";
	std::cout<<"Type a number: ";std::cin>>a;
	std::cout<<"Your guess is: "<<a<<"\n";
	int num;
	num=1+rand()%(101-1);
	std::cout<<"The number I was thinking of is: "<<num<<"\n";
	if(a>=num){aux=a-num;}else{aux=num-a;}
	std::cout<<"You were off by: "<<aux;
	return 0;
}





