#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int n = 0;

	cin >> n;

	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}
	
	cout << "The sum is " << sum << endl;
	return 0;
}