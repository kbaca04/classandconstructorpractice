#include "Book.h"
#include <iostream>
using namespace std;

Book::Book(string t,string a,int p) {
	this -> title = t;
	this -> author = a;
	this -> pages = p;
}
void Book::displayBook() {
	cout << "Title: " << this -> title << endl;
	cout << "Author: " << this-> author << endl;
	cout << "Pages: " << this -> pages << endl;
}
