#include <iostream>
using namespace std;

int main() {
	int month = 0;
	cin >> month;
	switch (month) {
	case 1:
		cout << "january" << endl;
		break;
	case 2:
		cout << "february" << endl;
		break;
	case 3:
		cout << "march" << endl;
		break;
	case 4:
		cout << "april" << endl;
		break;
	case 5:
		cout << "may" << endl;
		break;
	case 6:
		cout << "june" << endl;
		break;
	case 7:
		cout << "july" << endl;
		break;
	case 8:
		cout << "august" << endl;
		break;
	case 9:
		cout << "september" << endl;
		break;
	case 10:
		cout << "october" << endl;
		break;
	case 11:
		cout << "november" << endl;
		break;
	case 12:
		cout << "december" << endl;
		break;
	default:
		cout << "not a valid month" << endl;
	}
	system("pause");
	return 0;
}