#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int COLUMNS = 3;
const int ROWS = 7;

double row_total(int table[][COLUMNS], int row)
{
	int total = 0;
	for (int j = 0; j < COLUMNS; j++)
	{
		total = total + table[row][j];
	}
	return total;
}

int _tmain(int argc, _TCHAR* argv[])
{
	const int COUNTRIES = 7;
	const int MEDALS = 3;
	int medalCountRow = 0;
	int medalCountCol = 0;

	string countries[] =
	{
		"Canada",
		"China",
		"Germany",
		"Korea",
		"Japan",
		"Russia",
		"United States"
	};

	int counts[COUNTRIES][MEDALS] =
	{
		{1, 0, 1},
		{1, 1, 0},
		{0, 0, 1},
		{1, 0, 0},
		{0, 1, 1},
		{0, 1, 1},
		{1, 1, 0}	
	};

	//cout << "The array order is as follows: " << endl;
	//for (int c = 0; c < COUNTRIES; c++)
	//{
	//	for (int m = 0; m < MEDALS; m++)
	//	{
	//		cout << counts[c][m] << " ";
	//		if (counts[c][m] == 1)
	//		{
	//			medalCountRow++;
	//		}
	//	}
	//	cout << "Medal Total: " << medalCountRow;
	//	medalCountRow = 0;
	//	cout << endl;		
	//}
	//cout << endl;

	//// reversed for loop
	//for (int n = 0; n < MEDALS; n++)
	//{
	//	for (int b = 0; b < COUNTRIES; b++)
	//	{
	//		if (counts[b][n] == 1)
	//		{
	//			medalCountCol++;
	//		}
	//	}
	//	cout << "Medals " << medalCountCol << " ";
	//	medalCountCol = 0;
	//}

	// BOOK EXAMPLE BELOW ---
	cout << "	Country	   Gold	 Silver	 Bronze	  Total" << endl;

	// Print countries, counts, and row totals
	for (int i = 0; i < COUNTRIES; i++)
	{
		cout << setw(15) << countries[i];
		// Process the ith row
		for (int j = 0; j < MEDALS; j++)
		{
			cout << setw(8) << counts[i][j];
		}
		int total = row_total(counts, i);
		cout << setw(8) << total << endl;
	}

	// counts columns
	for (int n = 0; n < MEDALS; n++)
	{
		for (int b = 0; b < COUNTRIES; b++)
		{
			if (counts[b][n] == 1)
			{
				medalCountCol++;
			}
		}
		cout << "Medals: " << medalCountCol << " ";
		medalCountCol = 0;
	}

	system("pause");
	return 0;
}