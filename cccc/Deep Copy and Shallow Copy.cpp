#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

//  # Deep Copy and Shallow Copy

//class dummy {
//private:
//	int a, b;
//public:
//	void setdata(int x, int y) {
//		a = x;
//		b = y;
//	}
//	void showdata() {
//		cout << "a = " << a << endl;
//		cout << "b = " << b << endl;
//	}
//	dummy(dummy& d) { //  Shallow Copy
//		a = d.a; b = d.b;
//		// deep copy ke liye pointer laga ke krna padega
//	}
//};
//
//void main() {
//	dummy d1;
//	d1.setdata(5, 6);
//	d1.showdata();
//	dummy d2 = d1; //  Shallow Copy
//	d2.showdata();
//	system("pause");
//}