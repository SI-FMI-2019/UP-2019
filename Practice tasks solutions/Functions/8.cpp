#include <iostream>
#include <math.h>
using namespace std;

void printDigits(int number) {
	if (number == 0) {
		cout << 0 << "\n";
	}

	while (number != 0) {
		int lastDigit = number % 10;
		cout << lastDigit << "\n";
		number /= 10;
	}
}

int main() {
	printDigits(123);
}