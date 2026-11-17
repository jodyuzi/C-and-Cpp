#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// # Initializers

//class dummy {
//private:
//	int a, b;
//	const int x; // const variable must be initialized in constructor
//public: // const directly initialize nahi ho skta constructor me hi initialize hoga
//	dummy(int &n) :x(5), b(n) { // const class me instance variable ko constructor me initialize krna hoga
//		cout << "default constructor" << endl;
//	}
//};
//
//
//main() {
//	int m = 8;
//	dummy d1(m);
//}