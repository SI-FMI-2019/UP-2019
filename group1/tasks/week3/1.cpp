#include <iostream>
using namespace std;

int main()
{
	int input = 1;
	bool check = true;

	while(check == true)
	{
		cin >> input;

		if(input > 0)
		{
			cout << "You have entered " << input;
		}	
		else
		{
			check = false;
		}
	}
	cout << "We have escaped\n";
	return 0;
}