#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int age = 0;
	cout << "Your age: ";
	cin >> age;
	cout << "Your age (8): " << oct << setw(5) << age << endl;
	cout << "Your age (16): " << hex << setw(5) << age << endl;
	cout << "Your age (10): " << dec << setw(5) << age << endl;
	system("pause");
	return 0;
}