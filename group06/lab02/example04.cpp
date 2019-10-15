#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.1415926535;

int main() {
	cout << setprecision(5) << PI << endl;
	cout << setiosflags(ios::fixed) << PI << endl;
	system("pause");
	return 0;
}