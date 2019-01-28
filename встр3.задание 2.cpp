// ConsoleApplication9.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	float S, R, L;
	const float pi = 3.14;
	cout << "Vvedite R ";
	cin >> R;
	S = pi*(R*R);
	L = 2 * pi*R;

	cout << "S=  " << S << "\r\nL= " << L;

	return 0;
}