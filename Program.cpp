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
using std::endl;
using std::cout;
using std::strtod;


 // converts const char pointer fahrenheit value to double celsius value
double cpp_ftoc(const char* str){ 
	double F = stod(str);
	return (F - 32) * (5.0 / 9.0);
}


//converts const char pointer celcius value to double fahrenheit value
double cpp_ctof(const char* str) {
	int* p = NULL;
	double C = strtod(str, NULL);
	return (9.0 / 5.0) * C + 32;
}


// takes the file name 
// then f or c to specify which was given (if given f it will convert fahrenheight to celcius and vice versa)
// and the value to be converted
int main(int argc, const char** argv) {  

	if (*argv[1] == 'f' or *argv[1] == 'F') {
		double C = cpp_ftoc(argv[2]);
		cout << argv[2] << " fahreheit, in celcius is " << C << endl;
	}

	else if (*argv[1] == 'c' or *argv[1] == 'C') {
		double C = cpp_ctof(argv[2]);
		cout << argv[2] << " celcius, in fahrenheit is " << C << endl;
	}

	else cout << "Incorect parameter given. Please use f or c to speficy the units of the starting tempertatur" << endl;
	
	return  0; 
}