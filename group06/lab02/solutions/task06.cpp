#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x = 0;
	cout << "Enter x: ";
	cin >> x;
	double numerator = sin(sin(sin(x))) + cos(cos(cos(x)));
	double denominator = abs(log(x)) + abs(cos(x)) + exp(x);
	double result = numerator / denominator;
	cout << "Result: " << result << endl;
	system("pause");
	return 0;
}
