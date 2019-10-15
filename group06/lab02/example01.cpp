#include <iostream>
using namespace std;

const int CURRENTYEAR = 2019;

int main() {
	cout << "Please enter your year of birth: ";
	int birthYear = 0;
	cin >> birthYear;
	bool isOfFullAge = (CURRENTYEAR - birthYear) >= 18;
	cout << isOfFullAge << endl;
	system("pause");
	return 0;
}