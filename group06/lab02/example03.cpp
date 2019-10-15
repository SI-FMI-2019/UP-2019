#include <iostream>
using namespace std;

int main() {
	int x = 0;
	int y = 0;
	bool A = x++ && y++;
	bool B = x++ || ++y;
	cout << y << endl;
	system("pause");
	return 0;
}