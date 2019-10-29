#include <iostream>
using namespace std;

int main() {
	int myNumber = 0;
	cout << "Enter a number: ";
	cin >> myNumber;
	if (!cin || myNumber < 0) {
		cout << "Error! Bad input!" << endl;
		return 1;
	}
	unsigned long long factorial = 1;
	for (int i = 1; i <= myNumber; i++) {
		factorial = factorial * i;
	}
	cout << myNumber << "! = " << factorial << endl;
	system("pause");
	return 0;
}