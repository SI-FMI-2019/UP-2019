#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*Задача 5: Напишете програма, която по въведено от клавиатурата число х 
пресмята и извежда на конзолата стойността на израза:
	√(|𝑥|)
 с точност до 3 знака след десетичния знак.
*/

int main() {
	double x = 0;
	cout << "Enter x: ";
	cin >> x;
	double result = sqrt(abs(x));
	cout << "Result: " << setiosflags(ios::fixed) << setprecision(3) << result << endl;
	system("pause");
	return 0;
}