#include <iostream>
using namespace std;

int main() {
	double population = 6.0;
	double increaseRate = 0.06;
	int currentYear = 2000;
	while (population <= 10) {
		population += population * increaseRate;
		currentYear++;
	}
	cout << currentYear << endl;
	system("pause");
	return 0;
}