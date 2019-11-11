#include <iostream>
using namespace std;

int main() {
	double a = 0, b = 0, c = 0;
	cout << "Enter the three sides of the triangle: ";
	cin >> a >> b >> c;
	if (!cin) {
		cout << "Error! Bad input!" << endl;
		return 1;
	}
	if (a <= 0 || b <= 0 || c <= 0) {
		cout << "Error! The sides of the triangle must be positive numbers!" << endl;
		return 1;
	}
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "Error! No triangle with sides a, b and c." << endl;
		return 1;
	}
	if (a == b && b == c) {
		cout << "The triangle is equilateral." << endl;
	}
	else if (a == b || b == c || a == c) {
		cout << "The triangle is isosceles." << endl;
	}
	else {
		cout << "The triangle is irregular." << endl;
	}
	system("pause");
	return 0;
}