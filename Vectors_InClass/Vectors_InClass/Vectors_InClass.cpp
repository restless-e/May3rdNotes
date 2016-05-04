// Vectors_InClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<double> values;

	values.push_back(32);
	values.push_back(54);
	values.push_back(67.5);
	values.push_back(29);
	values.push_back(65);
	values.pop_back(); // removes 65

	// to manually enter values
	double input;
	while (cin >> input)
	{
		values.push_back(input);
	}

	//copying elements in vectors.
	vector<int> squares;
	for (int i = 0; i < 5; i++)
	{
		squares.push_back(i*i);
	}
	vector<int> lucky_numbers;

	lucky_numbers = squares;
		// now lucky_numbers contains
		// the same element as squares


	system("pause");
	return 0;
}

