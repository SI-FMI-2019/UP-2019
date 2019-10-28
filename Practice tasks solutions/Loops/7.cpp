#include <iostream>
using namespace std;

int fact(int top) {
	int factorial = 1;
	for (int i = 1; i <= top; i++) {
		factorial *= i;
	}
	return factorial;
}

int binomial(int N, int K) {
	int Nfact = fact(N);
	int Kfact = fact(K);
	int NmKfact = fact(N - K);
	return Nfact / (Kfact * NmKfact);
}

int main() {
	int N = 10;
	int K = 1;
	cout << binomial(N, K);
	system("pause");
}
