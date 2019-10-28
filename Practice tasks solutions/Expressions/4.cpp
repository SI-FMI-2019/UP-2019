#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int age = 0;
	cin >> age;
	cout << age * 365 * 24 * 60 * 60;
	cout << " seconds have passed since your birth\n";    
}
