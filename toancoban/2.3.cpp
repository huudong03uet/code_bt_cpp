#include <iostream>
using namespace std;
int solve(int n) {
	int i = 2, cnt = 0;
	while (n != 1) {
		if (n % i == 0) {
			while (n % i == 0) n /= i;
			cnt++;
		}
		i++;
	}
	return cnt;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}