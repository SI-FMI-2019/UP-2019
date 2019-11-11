#include <iostream>
using namespace std;

int main() {
	int myNumber = 0;
	cin >> myNumber;
	if (myNumber == 0) {
		cout << "Digit average: " << 0 << endl;
		system("pause");
		return 1;
	}
	int digitCount = 0;
	double digitSum = 0;
	while (myNumber != 0) {
		int digit = myNumber % 10;
		myNumber /= 10;
		digitCount++;
		digitSum += digit;
	}
	double digitAverage = digitSum / digitCount;
	cout << "Digit average: " << digitAverage << endl;
	system("pause");
	return 0;
}