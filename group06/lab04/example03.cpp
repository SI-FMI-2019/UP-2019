#include <iostream>
using namespace std;

int main() {
	int myNumber = 0;
	double sum = 0;
	int count = 0;
	cout << "Enter a stream of numbers: " << endl;
	cin >> myNumber;
	while (cin) {
		sum += myNumber;
		count++;
		cin >> myNumber;
	}
	double average = count > 0 ? sum / count : 0;
	cout << "Average: " << average << endl;
	system("pause");
	return 0;
}