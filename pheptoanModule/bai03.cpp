#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += i % k;
		if (sum == k) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}