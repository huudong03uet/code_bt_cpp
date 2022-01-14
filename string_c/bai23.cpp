#include <iostream>
using namespace std;
int factor(int n) {
	int mul = 1;
	for (int i = 2; i <= n; i++) mul *= i;
	return mul;
}
int nhiThucNiwton(int n, int k) {
	return factor(n) / (factor(n - k) * factor(k));
}
int main() {
	int n_test;
	cin >> n_test;
	while (n_test--) {
		int sum = 0;
		int n, g, b, r; cin >> n >> g >> b >> r;
		for (int i = g; i <= n - b - r; i++) {
			for (int j = b; j <= n - i - r; j++) {
				sum += nhiThucNiwton(n, i) * nhiThucNiwton(n - i, j);
			}
		}
		cout << sum << endl;
	}
	return 0;
}