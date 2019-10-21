#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double x = 0;
	cout << "Enter x: ";
	cin >> x;
	double result = sqrt(abs(x));
	cout << "Result: " << setiosflags(ios::fixed) << setprecision(3) << result << endl;
	system("pause");
	return 0;
}
