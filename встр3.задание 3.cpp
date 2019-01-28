// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double v, t, a, s;
	cout << "Vvedite v "; cin >> v; cout << " \r\nVvedite t "; cin >> t; cout << "\r\nVvedite a ";cin >> a;
	s = v *t + ((a*(t*t)) / 2);
	cout << "\r\ns = " << s;
}
