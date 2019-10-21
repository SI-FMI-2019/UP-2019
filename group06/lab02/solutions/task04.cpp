#include <iostream>
using namespace std;

/*Задача 4: Напишете програма, която чете от клавиатурата цяло число и:
			- определя дали числото е четно;
			- определя дали числото се дели едновременно на 4 и на 7.
*/

int main() {
	int number = 0;
	cout << "Enter number: ";
	cin >> number;
	bool isEven = number % 2 == 0;
	bool isDivisibleByFourAndSeven = (number % 4 == 0) && (number % 7 == 0);
	cout << "Is even: " << isEven << endl;
	cout << "Is divisible by 4 and 7: " << isDivisibleByFourAndSeven << endl;
	system("pause");
	return 0;
}