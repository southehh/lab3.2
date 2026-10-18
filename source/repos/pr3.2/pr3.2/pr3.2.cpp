#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x, F, a, b, c;
	cout << "x = "; cin >> x; 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	if (x < 0 && b != 0)
		F = (2 * x - c) / (c * x - a);
	else if (x > 0 && b == 0)
		F = (x - a) / (x - c);
	else
		F = -x / c - c / (2 * x);

	cout << "F = " << F;

	cin.get();
	return 0;
}