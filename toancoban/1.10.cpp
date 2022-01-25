#include <iostream>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int temp = sqrt(n);
		for (int i = 2; i <= temp; i++)
			if (isPrime(i)) cout << i * i << " ";
		cout << endl;
	}
	return 0;
}