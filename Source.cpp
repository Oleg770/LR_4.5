// Лабораторна робота № 4.5
// < Калька Олег >
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, y, a, b;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;

		if ((y >= a && y <= b && x >= -a && x <= a) ||
			(x * x + y * y <= a) ||
			(y >= -b && y <= x - a && y <= -x - a) )
			cout << "yes" << endl;
		else
		    cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		x = 6.*rand()/RAND_MAX - 3;
		y = 6.*rand()/RAND_MAX - 3;

		if ((y >= a && y <= b && x >= -a && x <= a) ||
			(x * x + y * y <= a) ||
			(y >= -b && y <= x - a && y <= -x - a))
			cout << setw(8) << setprecision(4) << x << "   "
			     << setw(8) << setprecision(4) << y << "   " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << "   "
			     << setw(8) << setprecision(4) << y << "   " << "no" << endl;
	}
	return 0;
}