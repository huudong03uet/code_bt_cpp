#include <iostream>
using namespace std;
long long mod(string a, long long m) {
	int temp = 0;
	for (int i = 0; i < a.length(); i++) {
		temp = temp * 10 + a[i] - '0';
		temp %= m;
	}
	return temp;
}
long long luyThua(long long r, long long b, long long m) {
	long long temp = 1;
	while (b) {
		if (b % 2 == 1) {
			temp *= r;
			temp %= m;
		}
		r *= r;
		r%= m;
		b /= 2;
	}
	return temp;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string a; long long b; long long m;
		cin >> a >> b >> m;
		long long r = mod(a, m);
		cout << luyThua(r, b, m);
	}
	return 0;
}