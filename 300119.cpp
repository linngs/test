// ConsoleApplication15.cpp: определяет точку входа для консольного приложения.
//
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void show_array(int a[], int size)
{
	for (int ii = 0; ii < size; ii++)
	{
		cout << a[ii] << " ";
	}
	cout << endl;
}

int main()
{
	const short size = 10;
	int a[size];
	int t, i, j;
	cout << " a  ";
	
	for (int i = 0; i < size; i++)
	{
		cin>> a[i];
		
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		show_array(a, size);
	}
	show_array(a, size);

		return 0;
}
