#include <iostream>
using namespace std;

int main() {
	double firstNumber = 0;
	double secondNumber = 0;
	cout << "Enter first number: ";
	cin >> firstNumber;
	cout << "Enter second number: ";
	cin >> secondNumber;
	double average = (firstNumber + secondNumber) / 2;
	cout << "Average: " << average << endl;
	system("pause");
	return 0;
}
