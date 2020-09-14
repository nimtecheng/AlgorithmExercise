// MinimumCommonMultiple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"pch.h"
#include <iostream>
using namespace std;

int HighestCommonDivisor(int a, int b)
{
	int c=1;
	int min;
	if (a >= b)
		min = b;
	else
		min = a;

	for (int i = 2; i < min; i++)
		if (b%i == 0 && a%i == 0)
			c = i;
	return c;
	
}

int MinimumCommonMultiple(int a, int b)
{
	int c;
	c = a * b / HighestCommonDivisor(a, b);
	return c;

}

int main()
{
	int a, b;
	cin >> a>>b;
	cout << MinimumCommonMultiple(a, b) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
