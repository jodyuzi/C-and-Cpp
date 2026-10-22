#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



// method overriding 2 class kin func ko hum chahte h sirf 1 class child class me chale isiliye uska function name same rahenge aur us func me modify code dalenge


//class  car{
//public:
//	void shiftgear(){}
//	void f2(){}
//	void f3() {}
//	void f5(){} 
//};
//
//
//class sportscar:public car {
//public:
//	void gearchange() {} 
//	void shiftgear() {}   // method overriding
//	void f1(){}
//	void f5(int f){} // method hiding // current me name same func mil jayega isiliye yahi wala func chalega na ki parent class ka
//};
//
//
//void main() {
//	sportscar obj;
//	obj.gearchange();  // car
//	obj.shiftgear();   // sportscar
//	obj.f3(); // current class me function mil jata h to name same to dusre parent class me nhi jata 
//	/*obj.f5();*/ // error // current class me name same mil jata h to dusre parent classs me nhi jata
//}