#include <iostream>
using namespace std;
const int mod = (int)1e9 + 7;
long long mul(int n, int x) {
	long long tmp = 1;
	while (x) {
		if (x % 2 == 1) {
			tmp *= n;
			tmp %= mod;
		}
		n *= n; n %= mod;
		x /= 2;
	}
	return tmp;
}
int main() {
	int arr[2001];
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, x; cin >> n >> x;
		for (int i = 1; i <= n; i++) cin >> arr[i];

		long long sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += (arr[i] * mul(x, i - 1)) % mod;
		}
		cout << sum << endl;
	}
	return 0;
}