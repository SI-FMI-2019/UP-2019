#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	int sum = 0, count = 0, max = 0, min = 2147483647;

	cin >> input;

	while(input != -1)
	{
		sum += input;
		count++;
		if(input > max)
		{
			max = input;
		}
		if(input < min)
		{
			min = input;
		}

		cin >> input;
	}

	cout << "Max is: " << max << endl;
	cout << "Min is: " << min << endl;
	cout << "Avg is: " << sum/count << endl; 
	return 0;
}