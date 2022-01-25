#include <iostream>
#include <cmath>
using namespace std;
//const int mod = (int)1e9 + 7;
long long mul(long long x, long long y, long long z) {
	long long tmp = 1;
	while (y) {
		if (y % 2 == 1) {
			tmp *= x;
			tmp %= z;
		}
		x *= x; x %= z;
		y /= 2;
	}
	return tmp;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long x, y, z;
		cin >> x >> y >> z;
		cout << mul(x, y, z) << endl;
	}
	return 0;
}