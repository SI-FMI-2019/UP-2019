#include <iostream>
using namespace std;

int findMax(int* numbers, int size) {
	if (numbers == nullptr) {
		return -1;
	}
	int currentMax = numbers[0];
	for (int i = 0; i < size; i++) {
		if (currentMax < numbers[i]) {
			currentMax = numbers[i];
		}
	}
	return currentMax;
}

double sumOddIndices(double* numbers, int size) {
	if (numbers == nullptr) {
		return -1;
	}
	if (size == 1) {
		return 0;
	}
	double sum = 0;
	for (int i = 1; i < size; i += 2) {
		sum += numbers[i];
	}
	return sum;
}

void swapWithAverageOfDigits(int& number) {
	if (number == 0) {
		return;
	}
	int digitCount = 0;
	int digitSum = 0;
	int numberCopy = number;
	int currentDigit = 0;
	while (numberCopy > 0) {
		currentDigit = numberCopy % 10;
		digitSum += currentDigit;
		digitCount++;
		numberCopy = numberCopy / 10;
	}
	number = digitSum / digitCount;
}

int getSumOfDigits(int number) {
	if (number < 0) {
		return -1;
	}
	int digitSum = 0;
	int numberCopy = number;
	int currentDigit = 0;
	while (numberCopy > 0) {
		currentDigit = numberCopy % 10;
		digitSum += currentDigit;
		numberCopy = numberCopy / 10;
	}
	return digitSum;
}

int main() {
	//int numbers[5];
	//for (int i = 0; i < 5; i++) {
	//	cin >> numbers[i];
	//}
	//cout << findMax(numbers, 5);
	double first[1] = { 3 };
	double second[3] = { 4.5, 2, 5.34 };
	double third[6] = { 2.3, 6, 1.9, 5, 3, 9.8 };
	
	double firstSum = sumOddIndices(first, 1);
	cout << firstSum << endl;

	cout << sumOddIndices(second, 3) << endl;
	cout << sumOddIndices(third, 6) << endl;

	system("pause");
	return 0;
}
