#include <iostream>
using namespace std;
long long mod(long long a, string b) {
	int temp = 0;
	for (int i = 0; i < b.length(); i++)
	{
		temp = temp * 10 + b[i] - '0';
		temp %= a;
	}
	return temp;
}
long long gcd(long long a, long long r) {
	if (r == 0) return a;
	else return gcd(r, a % r);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long a; string b; cin >> a >> b;
		long long r = mod(a, b);
		cout << gcd(a, r);
	}
	return 0;
}