// CountContinous1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//功能: 求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1   
//输入: 一个byte型的数字
//	返回 : 对应的二进制数字中1的最大连续数
//
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a)
	{
		int count = 0;
		int maxcount = 0;
		do
		{
			if (a % 2 == 1)
				count++;
			else
			{
				count = 0;
			}
			if (count >= maxcount)
				maxcount=count;

			a = a / 2;
		} while (a!=0);
		
		cout << maxcount << endl;
	}
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
