#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


// # Virtual Function parent A class me vitrual lagate h overriding ke liye B class me override keyword likh sakte ya na likho



class A
{
public:
    void f1()
    {
        cout << "A::f1()" << endl;
    }

    virtual void f2()
    {
        cout << "A::f2()" << endl;
    }

    virtual void f3()
    {
        cout << "A::f3()" << endl;
    }

    virtual void f4()
    {
        cout << "A::f4()" << endl;
    }
};

class B : public A
{
public:
    void f1()
    {
        cout << "B::f1()" << endl;
    }

    void f2() override
    {
        cout << "B::f2()" << endl;
    }

    void f4(int x)
    {
        cout << "B::f4(int): " << x << endl;
    }
};

int main()
{
    A* p;

    B o2;

    p = &o2;

    p->f1();     // Early binding
    p->f2();     // Late binding
    p->f3();     // Late binding
    p->f4();     // Late binding
    // p->f4(5); // Error

    return 0;
}