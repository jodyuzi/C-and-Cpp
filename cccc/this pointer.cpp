#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



// # this pointer

class A {
private:
	int l, b, h;
public:
	void setdimension(int l, int b, int h) { // yaha pe l b h local variable h and uske bahar bhi l b h isiliye local variable mana jayega l =l ye same l h setdemnsion ke 
		this->l = l;  // bahar ke l ,b h use krne ke liye this pointer use krna hoga 
		this->b = b;
		this->h = h; // this-> current object ko point karta matlb class wali variable ,function ko
	}
	void showdata() {
		cout << l << b << h << endl;
	}
};

void main() {
	A *p,obj;
	obj.setdimension(4,6,8);
	obj.showdata();
	/*p->setdimension(6,8,9);*/ // pointer se acces ->
}