#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include "Type Conversion.h"
using namespace std;


// Type Conversion Primitive to class type // Class type to primitive type // Another class type to another class

class complex {
private :
	int a, b;
public:
	void setdata(int x, int y) {
		a = x;
		b = y;
	}
	void showdata() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
	complex(int x) { // constructor with one argument
		a = x;
		b = 0;
	}
	complex() { // default constructor
		/*a = 0;
		b = 0;*/
	}

	operator int() { // class type to primitive type conversion
		return a + b;
	}
	
};
//class product; // forward declaration
//class item; // forward declaration

// Type Conversion one class type to another class
class product {
private:
	int m, n;
public:
	void setdata(int x, int y) {
		m = x;
		n = y;
	}
	int getm() {
		return m;
	}
	int getn() {
		return n;
	}
};
class item {
private:
	int a, b;
public:
	void showdata() {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
	item(product& p) { // constructor with one argument
		a = p.getm();
		b = p.getn();
	}
	item() {}// default constructor
};


void main() {
	complex c1,d2;
	int x = 5;
	c1 = x; // primitive to class type conversion
	c1.showdata();
	d2.setdata(3, 5);
	int y = d2; // class type to primitive type conversion
	cout << "y = " << y << endl;


	// Type Conversion one class type to another class

	item i1;
	product p1;
	p1.setdata(4, 6);
	i1 = p1; // one class type to another class type conversion
	i1.showdata();
	system("pause");
}

