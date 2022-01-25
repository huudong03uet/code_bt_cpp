#include <iostream>
using namespace std;
const int mod = (int)1e9 + 7;
long long arr[1001];
int main() {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= mod;
	}
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}