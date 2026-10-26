#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
	string title;
	string author;
	int pages;
public:
	Book(string,string,int);
	void displayBook();
};

