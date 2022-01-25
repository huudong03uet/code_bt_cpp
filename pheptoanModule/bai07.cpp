#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		int tmp = k / (n - 1);
		k = k - tmp * (n - 1);
		if (k == 0) k = -1;
		cout << k + tmp * n << endl;
	}
	return 0;
}