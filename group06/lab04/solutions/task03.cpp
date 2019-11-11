#include <iostream>
using namespace std;

int main() {
	char myChar = ' ';
	cin >> myChar;
	if (myChar == '.') {
		return 1;
	}
	int counter = 0;
	char nextChar = ' ';
	do {
		cin >> nextChar;
		if (nextChar == myChar) {
			counter++;
		}
	} while (nextChar != '.');
	cout << counter << endl;
	system("pause");
	return 0;
}