// SumOfEqualDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//功能:等差数列 2，5，8，11，14。。。。

//输入:正整数N > 0
//
//	输出:求等差数列前N项和

//	返回 : 转换成功返回 0, 非法输入与异常返回 - 1

//	本题为多组输入，请使用while(cin >> )等形式读取数据

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		if (n <= 0)
		{
			cout << -1 << endl;
			break;
		}
		else
		{
			for (int i = 1; i <= n; i++)
				sum = sum + 3 * i - 1;
			cout << sum << endl;
		}
		

		return 0;
	
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
