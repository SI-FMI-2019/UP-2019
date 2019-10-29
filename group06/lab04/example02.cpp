#include <iostream>
using namespace std;

int main() {
	int myNumber = 0;
	cout << "Enter a number: ";
	cin >> myNumber;
	if (!cin) {
		cout << "Error! Bad input!" << endl;;
		return 1;
	}
	int digitCount = 0;
	if (myNumber == 0) {
		digitCount = 1;
	}
	while (myNumber != 0) {
		myNumber /= 10;
		digitCount++;
	}
	cout << digitCount << endl;
	system("pause");
	return 0;
}