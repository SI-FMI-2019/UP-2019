#include <iostream>
using namespace std;

int main() {
	int myNumber = 5;
	bool someCheck = myNumber++ > 5;
	cout << someCheck << endl;
	bool anotherCheck = ++myNumber == 7;
	cout << anotherCheck << endl;
	system("pause");
	return 0;
}