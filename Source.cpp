// Lab_03_1.cpp 
// < Базарник Максим > 
// Лабораторна робота № 4.2 
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 1 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 1 + 9 * x;
		if (x <= 0)
			B = log(fabs(sin(x))) + pow(x, 7);
		else
			if (0 < x && x <= 3)
				B = 1./tan(fabs(x+1)/2);
			else
				B = 3 * x - pow(x, 5);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
