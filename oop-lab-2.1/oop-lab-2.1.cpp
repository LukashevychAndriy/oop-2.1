#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
	Point a;
	Point b(124, 2);
	Point c(b);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cin >> a;
	cout << a << endl;

	cout << "Distance() = " << b.Distance() << endl;

	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << --a << endl;
	cout << a << endl;
	cout << a-- << endl;
	cout << a << endl;
	
	return 0;
}
