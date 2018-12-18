//============================================================================
// Name        : TestForCallbyReference.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(int &c,int &d){

	cout << c << "  "<< d << endl;

	c=c+1;
	return ;
}


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!


	int a,b;
	a=6;
	b=8;

    test(a,b);

    cout << a <<endl;

	return 0;
}



