#include <iostream>
#include <fstream>
#include <cmath>
#include <stdio.h>
#include <string.h>
/*
Exercise 2. convertSeconds.cpp

• Write a program that converts a total number of
seconds to hours, minutes, and seconds. • It should (1) prompt the user for input, (2) read an
integer from the keyboard, (3) calculate the result, and
(4) use std::cout to display the output.
*/
int main(){
	int seconds,min,h,s;
	std::cout<<"Enter the number of seconds to convert: ";std::cin>>seconds;
	s=seconds;
	min=seconds/60;
	seconds=seconds%60;
	h=min/60;
	min=min%60;
	std::cout<<s<<" seconds = "<<h<<" hour(s) "<<min<<" minute(s) "<<seconds<<" second(s) ";
	return 0;
}