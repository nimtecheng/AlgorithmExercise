// arrayof2D.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int row_length, clounm_length;
	int a[5] = { 0,0,0,0,0 };
	cin >> row_length >> clounm_length;
	int row_swap1, clounm_swap1, row_swap2, clounm_swap2;
	cin >> row_swap1 >> clounm_swap1 >> row_swap2 >> clounm_swap2;

	if (row_swap1 > row_length - 1 || clounm_swap1 > clounm_length - 1 || clounm_swap2 > clounm_length - 1 || row_swap2 > row_length - 1)
		a[1] = -1;
	int row_insert, clounm_insert;
	cin >> row_insert;
	cin >> clounm_insert;

	//row_length = row_length + row_insert;
//	clounm_length = clounm_length + clounm_insert;

	if (row_length > 9)
		a[2] = -1;
	if (clounm_length >= 8)
		a[3] = -1;
	int row_search, clounm_search;

	cin >> row_search >> clounm_search;
	if (row_search > row_length - 1 || clounm_search > clounm_length - 1)
		a[4] = -1;
	for (int i = 0; i < 5; i++)
		cout << a[i] << endl;

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
