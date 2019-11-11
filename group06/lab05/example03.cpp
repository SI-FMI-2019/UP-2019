#include <iostream>
using namespace std;

int main() {
	int m = 0;
	int n = 0;
	cin >> m >> n;
	if (m > n) {
		return 1;
	}
	if (n < 100) {
		return 1;
	}
	if (m < 100) {
		m = 100;
	}
	if (n > 999) {
		n = 999;
	}
	bool isFound = 0;
	for (int i = m; i <= n; i++) {
		int c = i % 10;
		int a = i / 100;
		int d = 10 * a + c;
		if (i % d == 0) {
			cout << i << endl;
			isFound = 1;
			break;
		}
	}
	if (!isFound) {
		cout << "no such number" << endl;
	}
	system("pause");
	return 0;
}