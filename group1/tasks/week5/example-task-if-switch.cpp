#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	bool b;
	switch(a)
	{
		case 3:
			cout << "error";
			break;
		case 1:
			cout << "one";
		default:
			cout << "13";
	}
	return 0;
}