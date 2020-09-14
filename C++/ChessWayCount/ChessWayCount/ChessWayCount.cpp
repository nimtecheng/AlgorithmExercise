// ChessWayCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）
沿着各自边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，
即：只能往右和往下走，不能往左和往上走。
*/

#include "pch.h"
#include <iostream>
using namespace std;



int ChessWayCount(int row,int clounm)
{
	int ways;
	if (row == 1)
		ways = clounm + 1;
	else if (clounm == 1)
		ways = row + 1;
	else if (row > 1 || clounm > 1)
		ways = ChessWayCount(row, clounm - 1) + ChessWayCount(row - 1, clounm);

		
	

	return ways;
}

int main()
{
	int row, clounm;
	while (cin >> row >> clounm)
	{
		cout << ChessWayCount(row, clounm) << endl;
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
