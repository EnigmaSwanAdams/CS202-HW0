/*
* file: header.h
* Enigma Swan Adams
* 1/20/2022
*
* header for my plants class 
* the function defintions for the class
* can be seen in: Source.cpp
* 
*/

#ifndef HEADER_H_
#define HEADER_H_


class Plants {
public:
	//constructor
	Plants(int size, bool isVerigated, int days);

	//retrieval functions
	int getPotSize();
	bool getVerigation();
	int  getDaysHad();

	// more member functions
	void addToDaysHad(int days);
	void changePotSize(int size);

private:
	float _size = -1;
	bool _isVergiated = 0;
	int _days = -1;
};

#endif /* HEADER_H_*/
