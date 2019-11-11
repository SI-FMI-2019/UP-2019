#include <iostream>
using namespace std;

/*������ 2: �������� ��������, ����� ���� �� ������������ ��� ������ �� ������������
� �������� � ������� �� ��������� ���������� � ������ ��.*/

int main() {
	double height = 0;
	double width = 0;
	cout << "Enter height: ";
	cin >> height;
	if (!cin) {
		cout << "Bad input!" << endl;
		system("pause");
		return 1;
	}
	cout << "Enter width: ";
	cin >> width;
	if (!cin) {
		cout << "Bad input!" << endl;
		system("pause");
		return 1;
	}
	if (height > 0 && width > 0) {
		double perimeter = 2 * (height + width);
		double area = height * width;
		cout << "Perimeter: " << perimeter << endl;
		cout << "Area: " << area << endl;
	}
	else {
		cout << "Invalid input! Both sides must be positive!" << endl;
	}
	system("pause");
	return 0;
}