#include <iostream>
using namespace std;

/*Задача 2: Напишете програма, която чете от клавиатурата две страни на правоъгълник
и пресмята и извежда на конзолата обиколката и лицето му.*/

int main() {
	double height = 0;
	double width = 0;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter width: ";
	cin >> width;
	double perimeter = 2 * (height + width);
	double area = height * width;
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;
	system("pause");
	return 0;
}