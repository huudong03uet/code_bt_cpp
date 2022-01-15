#include <iostream>
using namespace std;
int mod = (int)1e9 + 7;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, x; cin >> n >> x;
		int arr[2001];
		for (int i = n - 1; i >= 0; i--) cin >> arr[i];
		long long sum = 0;
		for (int i = n-1; i >= 0; i--) {
			sum += arr[i] * pow(x, i);
			sum %= mod;
		}
		cout << sum;
	}
	return 0;
}