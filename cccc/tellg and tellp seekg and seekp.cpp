#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#include <fstream>

// # tellg and tellp !! seekg and seekp


//void main() {
//
//    fstream fin;
//    char ch;
//    int pos;
//
//    // File open in reading and writing mode
//    fin.open("F:/C/practicecc/cccc/vivek.txt", ios::in | ios::out);
//
//    if (!fin.is_open()) {
//        cout << "File not open!" << endl;
//        return;
//    }
//
//    // tellg() - Current reading position batata hai
//    pos = fin.tellg();
//    cout << "Current reading position: " << pos << endl;
//
//    // seekg() - Reading position ko change karta hai
//    fin.seekg(3, ios::beg);
//
//    pos = fin.tellg();
//    cout << "Reading position after seekg: " << pos << endl;
//
//    // File se ek character read karega
//    fin >> ch;
//    cout << "Character is: " << ch << endl;
//
//    // tellp() - Current writing position batata hai
//    pos = fin.tellp();
//    cout << "Current writing position: " << pos << endl;
//
//    // seekp() - Writing position ko change karta hai
//    fin.seekp(3, ios::beg);
//
//    pos = fin.tellp();
//    cout << "Writing position after seekp: " << pos << endl;
//
//    // Position 3 par X write karega (existing character replace hoga)
//    fin << "X";
//
//    fin.close();
//}

// # basic

//void main() {
//	fstream fin;
//	ofstream fout;
//	char ch;
//	int pos;
//	/*fin.open("F:/C/practicecc/cccc/vivek.txt");*/
//	fout.open("F:/C/practicecc/cccc/vivek.txt",ios::app);
//	/*pos = fin.tellg();*/ // tellg() function ka use karke current position ko get karte hai
//	pos = fout.tellp();
//	cout << "Current position is: " << pos << endl;
//	/*fin >> ch;*/
//	fout << "jod" << endl;
//	pos = fout.tellp();
//	cout << "Current position is: " << pos << endl;
//	fin.close();
//}