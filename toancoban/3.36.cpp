#include <iostream>
using namespace std;
int orac(int n) {

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return i;
	return n;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		for (int i = 1; i <= k; i++) {
			n += orac(n);
		}
		cout << n << endl;
	}
	return 0;
}