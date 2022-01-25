#include <iostream>
using namespace std;
void solve(int n, int k) {
	int cnt = 0;
	int i = 2;
	while (n != 1) {
		while (n % i == 0) {
			cnt++;
			if (cnt == k) {
				cout << i << endl;
				return;
			}
			n /= i;
		}
		i++;
	}
	cout << -1 << endl;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		solve(n, k);
	}
	return 0;
}