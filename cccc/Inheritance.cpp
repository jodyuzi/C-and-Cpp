#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// inheritance # inheritance ka matlab hota hai ki hum ek class ke properties aur methods ko dusre class me use kar sakte hai. 
// Inheritance ka use mainly code reusability ke liye hota hai. 
// Inheritance ka use karte waqt hume ye dhyan rakhna padta hai ki hum sirf existing class ke properties aur methods ko inherit kar sakte hai aur naye properties aur methods create nahi kar sakte hai. 
// nheritance ka use karte waqt hume ye dhyan rakhna padta hai ki hum sirf existing class ke properties aur methods ko inherit kar sakte hai aur naye properties aur methods create nahi kar sakte hai.


// # Constructor and destructor in inheritance 

//class A {
//	int a;
//public:
//	A(int k) {
//		a = k;
//		cout << "A constructor called" << endl;
//	}
//	~A() {
//		cout << "A destructor called" << endl;
//	}
//	A(){} // default constructor
//	void showdata(int x) {
//		cout << "a=" << a << endl << "b=" << x << endl;
//	}
//};
//
//class B :public A {
//	int b;
//public:
//	B() {
//	}
//	B(int x, int y) :A(x) { // agar hum A class ke constructor ko call karna chahte hai to hum B class ke constructor me A class ke constructor ko call kar sakte hai. Agar hum A class ke constructor ko call nahi karte hai to compiler khud default constructor call karega. Agar A class me default constructor nahi hai to compiler error dega.
//		b = y;
//		cout << "B constructor called" << endl;
//	}
//	~B() { // pehle khudko destroy karega fir parent class ko destroy karega
//		// agar aap code nhi lagte parent ki destructor ko call krne ki to compilier khud code likh dega
//		// hume likhne ki jarurat nhi compiler khud likh dega
//		cout << "B destructor called" << endl;
//	}
//	void show() {
//		showdata(b);
//	}
//};
//
//void main() {
//	B obj(3,8);
//	obj.show();
//	system("pause");
//}

//class myarray {
//private:
//	int a[3], size = 3,i;
//	public :
//		void insert(int index, int value) {
//			a[index] = value;
//		};
//		void display() {
//			for (i = 0;i < 3;i++) {
//				cout << "a "<<i <<"=" << a[i] << endl;
//			}
//
//		}
//
//};
//
//class STACK :public myarray {
//	int top=0;
//public:
//	void push(int value) {
//		insert(top, value);
//		top++;
//	}
//
//};
//
//void main() {
//	STACK s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.display();
//	system("pause");
//}



// Basic Inheritance Types in C++

//class Car {
//private:
//	int x ,gear;
//protected:
//	void incrementgear() {
//		gear++;
//	}
//	void setvalue(int a) {
//		x = a;
//	}
//public:
//	void showdata() {
//		cout << "x =" << x << endl;
//	};
//};
//
//class SportsCar:public Car {
//private:
//	
//public:
//	void setdata(int a) {
//		setvalue(a);
//	}
//};
//
//void main() {
//	SportsCar obj;
//	obj.setdata(4);
//	obj.showdata();
//
//}