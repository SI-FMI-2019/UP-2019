#include <iostream>
using namespace std;

int main() {
	double x = 0, y = 0;
	cout << "Enter the coordinates: ";
	cin >> x >> y;
	if (x * y == 0) {
		cout << "The coordinates should not be 0." << endl;
		return 1;
	}
	if (x > 0 && y > 0) {
		cout << "First." << endl;
	}
	else if (x > 0 && y < 0) {
		cout << "Second." << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "Third." << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "Fourth." << endl;
	}
	system("pause");
	return 0;
}