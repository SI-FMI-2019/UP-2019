#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int end = 17;
	int currentRow = 1;
	int endPrintAt = 1;
	for (int i = 1; i <= end; i++) {
		cout << i << " ";

		if (endPrintAt == i) {
			cout << "\n";
			currentRow++;
			endPrintAt += currentRow;
		}
	}
}
