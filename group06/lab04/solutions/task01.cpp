#include <iostream>
using namespace std;

int main() {
	double x = 0;
	cout << "Enter a real number x: ";
	cin >> x;
	int n = 0;
	while (n <= 0) {
		cout << "Enter a natural number n: ";
		cin >> n;
	}
	double s = 1;
	unsigned long long factorial = 1;
	for (int i = 1; i <= n; i++) {
		factorial *= i;
		s += pow(x, i) / factorial;
	}
	cout << "s = " << s << endl;
	system("pause");
	return 0;
}