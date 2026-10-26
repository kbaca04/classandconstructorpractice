#include <iostream>
#include "Book.h"
#include <string>
using namespace std;

int main()
{
	string t, a;
	int p;

	cout << "Welcome. Enter three book titles, their authors, and their page numbers." << endl;
	cout << "Title one: ";
	getline(cin, t);
	cout << "Author one: ";
	getline(cin, a);
	cout << "Page count one: ";
	cin >> p;


	cout << "Great. You entered..."<< endl;
	Book book1(t, a, p);
	book1.displayBook();



}


