/*
* file: Program.cpp
* Enigma Swan Adams
* 1/20/2022
*
* source code for the main program section of
* homework 0
*
* converts Fahrenheit to Celcius 
* by procfessing comand line arguments
*/


#include <iostream>
#include <string>
using std::string;
using std::stod;

double FtoC(double F) {
	return (F - 32) * (5 / 9);
}

int main(int argc, const char** argv) {
	string strF = argv[1]; // get F value from comand line 
	double F = stod(strF); // convert the stirng F value to a double
	return  FtoC(F); // convert F to C and return it
}