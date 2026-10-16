#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;




class  car{
public:
	void shiftgear(){}
	void f2(){}
	void f3() {}
	void f5(){} // func overloading 
};


class sportscar:public car {
public:
	void gearchange() {} // method overriding
	void f2() {}  // method hiding
	class A {
	void f1(){}
	void f5(int x){}
};
};

void main() {
	sportscar obj;
	obj.gearchange();  // car
	obj.shiftgear();   // sportscar
	obj.f3(); // current class me function mil jata h to name same to dusre parent class me nhi jata 
	obj.f5(); // current class me name same mil jata h to dusre parent classs me nhi jata
}