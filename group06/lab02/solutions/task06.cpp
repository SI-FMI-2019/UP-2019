#include <iostream>
#include <cmath>
using namespace std;

/*Задача 6: Напишете програма, която по въведено от клавиатурата число х 
пресмята и извежда на конзолата стойността на израза:
(sin⁡(sin⁡(sin⁡𝑥)) + cos⁡(cos⁡(cos⁡𝑥))) / (|ln⁡𝑥| + |cos𝑥| + 𝑒^𝑥).
*/

int main() {
	double x = 0;
	cout << "Enter x: ";
	cin >> x;
	double numerator = sin(sin(sin(x))) + cos(cos(cos(x)));
	double denominator = abs(log(x)) + abs(cos(x)) + exp(x);
	double result = numerator / denominator;
	cout << "Result: " << result << endl;
	system("pause");
	return 0;
}