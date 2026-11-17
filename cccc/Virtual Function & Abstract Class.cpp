#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// # Virtual Function parent A class me vitrual lagate h overriding ke liye B class me override keyword likh sakte ya na likho


// # Abstract Class
// do nothing
//class persion {
//public:
//	/*void fun()=0;*/ // do nothimg h iska object nhi banega class ka
//
//	virtual void fun() = 0; // # pure virtual function = do nothing  // call se bachne ke liye lagate
//	void f1(){// all codes} // ye child classs se access kr sakte
//};
//
//class B :public persion {// child class se do nothing class ke function ko access kr sakte
//	void fun(){} // overriding kr sakte
// // void fun()=0; // yaha bhi pure virtual function class bana sakte
//};




// # virtual function

//class A
//{
//public:
//    void f1()
//    {
//        cout << "A::f1()" << endl;
//    }
//
//    virtual void f2()
//    {
//        cout << "A::f2()" << endl;
//    }
//
//    virtual void f3()
//    {
//        cout << "A::f3()" << endl;
//    }
//
//    virtual void f4()
//    {
//        cout << "A::f4()" << endl;
//    }
//    // f4(5) aisa ek aur function banana padega tabhi A type ki pointer ke adhar pe chalega nhi to error aayega 
//};
//
//class B : public A
//{
//public:
//    void f1()
//    {
//        cout << "B::f1()" << endl;
//    }
//
//    void f2() override // override likhna optional h likhe ya na likhe
//    {
//        cout << "B::f2()" << endl;
//    }
//
//    void f4(int x)
//    {
//        cout << "B::f4(int): " << x << endl;
//    }
//};
//
//int main()
//{
//    A* p;
//
//    B o2;
//
//    p = &o2;
//
//    p->f1();     // Early binding
//    p->f2();     // Late binding
//    p->f3();     // Late binding
//    p->f4();     // Late binding
//    // p->f4(5); // Error
//
//    return 0;
//}




// basic


//class A {
//public:
//    void f1();
//    virtual void f2();
//    void f3();
//    virtual void f4();
//    /*void f4(int x);*/ // banana padega kyuki pointer A type ka adhar h to A me khojega nhi mila to error aayega 
//};
//
//class B:public A {
//    void f1();
//    void f2();
//    void f3();
//    void f4();
//    void f4(int x);
//};
//
//int main() {
//    A* p, objA;
//    B objB;
//    p = &objB;
//    p->f1();
//    p->f2();
//    p->f3();
//    p->f4();
//   /* p->f4(5);*/
//
//}