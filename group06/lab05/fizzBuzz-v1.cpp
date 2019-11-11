#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 15 == 0) {
			cout << "Fizz Buzz" << endl;
		}
		else if (i % 3 == 0) {
			cout << "Fizz" << endl;
		}
		else if (i % 5 == 0) {
			cout << "Buzz" << endl;
		}
		else {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}