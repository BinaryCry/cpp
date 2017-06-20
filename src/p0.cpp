//============================================================================
// Name        : p0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
// using namespace std;
using std::cout;
using std::endl;

int main() {

	unsigned short int x = 0b1000000000000111;


	cout << "!!!Hello World!!!" << endl << endl; // prints !!!Hello World!!!
	cout << 20+5%3; // % first
	cout << endl << x;
	x = x << 1; // move to left 1 bit
	cout << endl << x;
	return 0;
}
