#include <iostream>
using namespace std;

/*Задача 1: Напишете програма, която чете от клавиатурата две числа 
и пресмята и извежда на конзолата тяхното средно аритметично.*/

int main() {
	double firstNumber = 0;
	double secondNumber = 0;
	cout << "Enter first number: ";
	cin >> firstNumber;
	cout << "Enter second number: ";
	cin >> secondNumber;
	double average = (firstNumber + secondNumber) / 2;
	cout << "Average: " << average << endl;
	system("pause");
	return 0;
}