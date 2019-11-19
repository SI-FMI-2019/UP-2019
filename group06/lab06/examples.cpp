#include <iostream>
using namespace std;

bool checkIsEven(int number) {
	return number % 2 == 0;
}

double findMinimalNumber(double a, double b, double c) {
	double minimal = a;
	if (minimal > b) {
		minimal = b;
	}
	if (minimal > c) {
		minimal = c;
	}
	return minimal;
}

void progression(int n, double first, double difference) {
	if (n <= 0) {
		return;
	}
	double currentMember = first;
	for (int i = 1; i <= n; i++) {
		cout << currentMember << endl;
		currentMember += difference;
	}
}

int main() {
	cout << checkIsEven(2) << endl;
	double minimal = findMinimalNumber(3, 6.4, 1.3);
	cout << minimal;
	progression(4, 1.2, 8);
	system("pause");
	return 0;
}