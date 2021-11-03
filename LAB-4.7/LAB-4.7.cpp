// LAB-4.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Lab_04_7.cpp
// Сушинський Ігор
// Лабораторна робота № 4.7
// Вкладені цикли.
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	    cout << "-------------------------------------------------" << endl;
	    cout << "|" << setw(5) << "x" << " |"
		            << setw(10) << "log10(x)" << " |"
		            << setw(7) << "S" << " |"
		            << setw(5) << "n" << " |"
		            << endl;
	    cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; // вираз залежить від умови завдання варіанту
		a = 1; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = (n - n * x) / (n + 1); // вираз залежить від умови завдання варіанту
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			        << setw(10) << setprecision(5) << log10(x) << " |"
			        << setw(10) << setprecision(5) << S << " |"
			        << setw(5) << n << " |"
                    << endl;
		x += dx;
	}
	    cout << "-------------------------------------------------" << endl;

	return 0;
}