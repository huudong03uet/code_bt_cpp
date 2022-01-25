#include <iostream>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n;
		long long sum = 0;
		for (long long i = 1; i <= n; i++)
			sum += lcm(i, n);
		cout << sum << endl;
	}
	return 0;
}