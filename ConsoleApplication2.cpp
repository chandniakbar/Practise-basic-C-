// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class calculator {
	int a, b, c;
public:
	void input()
	{
		cin >> a >> b;

	}
	void add()
	{
		c = a + b;
		cout << "addition of a and b is: " << c <<endl;

	}
	void subtraction()
	{
		c = a - b;
		cout << "subtraction of a and b is :" << c << endl;

	}
	void multiplication()
	{
		c = a * b;
		cout << "multiplication of and b is :" << c << endl;
	}
	void division()
	{
		c = a / b;
		cout << "division of two numbers is:" << c << endl;
	}
};
int main()
{
	calculator cal;
	cal.input();
	cal.add();
	cal.subtraction();
	cal.multiplication();
	cal.division();
	return 0;
}