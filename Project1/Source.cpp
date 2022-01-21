/*
* file: Source.cpp
* Enigma Swan Adams
* 1/20/2022
*
* source code for the additional program 1 section of
* homework 0
*
* prints one of two poems randomly
*/

#include <iostream>
#include <ctime>
using std::cout;

int main() {
	// generate random number in a range
	srand(time(0));
	int num = rand() % 2;

	if (num == 0) {
		cout << "Currently \n\nI am skipping stones \n"
			"Walking in static filled air \n"
			"as fast as I can "
			<< std::endl <<
			"Welcome home\! \n"
			"You\'ve been gone a minute \n"
			"I\'ve been gone 12 hours \n \n"

			"Oh, the way time holds us\n \n"

			"Time is 15 minutes till\n"
			"an eight hour shift\n"
			"A weekend away\n"
			"Smmer vacation \n"

			"freezing brown grass \n"
			"Thousands of butterflies clinging\n"
			"to one tree\n"
			"Rings on trees and layers of earth\n"
			"That pile up over time\n"
			"That we use to mark time\n \n"

			"Mark  \n"
			"Make note of that \n"
			"The door swinging \n"
			"Its time \n"
			"I\'ve got to go \n"

			"I\'ve forgotten how to \n"
			"walk slowly \n";
	}
	else if (num == 1) {
		cout << "On the Evanescence of snow \n \n"

			"Her boots left little \n"
			"heart shaped indents in the snow \n"
			"Like trailing whispers \n"
			"And I whispered back \n"
			"\"I love you\"\n \n"

			"But now, \n"
			"It isn\'t raining \n"
			"The sky is melting \n"
			"It was a great big block of snow \n"
			"And now its melting\n" << std::endl;

	}
	else {
		cout << "error" << std::endl;
	}
	return 0;
}