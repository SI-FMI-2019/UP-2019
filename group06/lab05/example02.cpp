#include <iostream>

using namespace std;

int main() {

	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			if (a == b)
			{
				continue;
			}
			for (int c = 0; c <= 9; c++)
			{
				if (c == b || c == a)
				{
					continue;
				}
				cout << a << b << c << endl;
			}
		}
	}

	system("pause");
	return 0;
}