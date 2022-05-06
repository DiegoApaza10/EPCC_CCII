#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

/*
Exercise 1. convertTemperature.cpp
Write a program that converts a temperature from Celsius
to Fahrenheit. • It should (1) prompt the user for input, (2) read a double
value from the keyboard, (3) calculate the result, and (4)
format the output to one decimal place. When it’s finished,
it should work like this:
*/
int main(){
	double celcius,F;
	cout<<"Ingrese su valor en celcius ";cin>>celcius;
	F=(celcius*9/5)+32;
	cout<< fixed<<setprecision(1)<<celcius;
	cout<<" = "<<F;
	return 0;
}