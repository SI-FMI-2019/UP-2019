#include <iostream>
using namespace std;

int main()
{
	int first_number = 0;
	int second_number = 0;
	char operation = 0;

	while(operation != 'q')
	{
		cin >> first_number;
		cin >> second_number;
		cin >> operation;

		if(operation == '+')
		{
			cout << "Result is: " << first_number + second_number << endl;
		}
		else if(operation == '-')
		{
			cout << "Result is: " << first_number - second_number << endl;
		}
		else if(operation == '*')
		{
			cout << "Result is: " << first_number * second_number << endl;
		}
		else if(operation == '/')
		{
			cout << "Result is: " << first_number / second_number << endl;
		}
		else if(operation == '%')
		{
			cout << "Result is: " << first_number % second_number << endl;
		}
	}
	return 0;
}