#include <iostream>
using namespace std;

int main() {
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "Enter 3 numbers: " << endl;
	cin >> a >> b >> c;
	double minimal = a;
	if (minimal > b) {
		minimal = b;
	}
	if (minimal > c) {
		minimal = c;
	}
	cout << "The minimal number is: " << minimal << endl;
	system("pause");
	return 0;
}