#include <cmath>
#include <iostream>
#include "Header.h"
#include "Header1.h"
using namespace std;
int main()
{
	Matrix<int> a, b, c;
	cout << "Ener matrix (n, m, mat): ";
	cin >> a;
	b = a;
	cout << "b=a, a==b = " << static_cast<int>(a == b) << "\n";
	c = a + b;
	cout << "a + b = \n" << c << "\n";
	c = a - b;
	cout << "a - b = \n" << c << "\n";
	c = a * b;
	cout << "a * b = \n" << c << "\n";
	cout << "a[1][1] = " << a[1][1] << "\n";

	Vector<int> d, e, f;
	cout << "Ener vector (n, vec): ";
	cin >> d;
	e = d;
	cout << "b=a, a==b = " << static_cast<int>(d == e) << "\n";
	d.sort_quick(0, d.get_lenght() - 1);
	cout << "a.sort() \n" << d << "\n";
	f = d + e;
	cout << "a + b = \n" << f << "\n";
	f = d - e;
	cout << "a - b = \n" << f << "\n";
	f = d * e;
	cout << "a * b = \n" << f << "\n";
	f = d / e;
	cout << "a / b = \n" << f << "\n";
	cout << "a[1] = " << d[1] << "\n";
	cout << "Enter matrix and vec ";
	cin >> a >> d;
	auto l = a * d;
	cout << "Mat*vec = " << l << "\n";

	return 0;
}