#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> A;
	cout << "b = "; cin >> B;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0.6 && B + c != 0)
			F = A * x * x + B * B + c;
		else
			if (x > 0.6 && B + c == 0)
				F = (x - A) / (x - c);
			else
				F = (x / c) + (x / A);
		cout << "|" << setw(7) << setprecision(2) <<  F << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}

