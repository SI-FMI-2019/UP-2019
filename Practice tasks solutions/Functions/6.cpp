#include <iostream>
#include <math.h>
using namespace std;

double distance(int x1, int y1, int x2, int y2) {
	return sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2) );
}

int main() {
	cout << distance(0, 0, 1, 1);
}