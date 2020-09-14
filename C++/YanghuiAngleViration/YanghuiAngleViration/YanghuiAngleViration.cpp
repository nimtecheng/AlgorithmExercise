// YanghuiAngleViration.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
using namespace std;
static unsigned int a[100][2 * 100 - 1];
void NumberGenerator(int n)
{
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 2 * i - 1; j++)
			a[i][j] = 0;

	a[0][0] = 1;

	for (int i = 1; i < n; i++)
		for (int j = 0; j <= (2 * i + 1); j++)
		{
			if (j == 0)
				a[i][j] = 1;
			else if (j == 1)
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			else
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1] + a[i - 1][j - 2];
		}

}

int main()
{
	int n;


	bool isThereOvenNumberOrNot=false;
	while (cin>>n)
	{
		NumberGenerator(n);
		for (int i = 0; i < 2*n-1; i++)
		{
			if (a[n - 1][i] % 2 == 0)
			{
				isThereOvenNumberOrNot = true;
				cout << i + 1 << endl;
				break;
			}

		}
		if (isThereOvenNumberOrNot == false)
			cout << -1 << endl;


	}
	

				
	return 0;
  
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
