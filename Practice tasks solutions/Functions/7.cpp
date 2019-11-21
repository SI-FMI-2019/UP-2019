#include <iostream>
#include <math.h>
using namespace std;

int reverseNumber(int number) {
	int reversed = 0;
	while (number != 0) {
		reversed *= 10;
		reversed += number % 10;
		number /= 10;
	}
	return reversed;
}

int main() {
	int reversed = reverseNumber(123);
	cout << reversed;
}