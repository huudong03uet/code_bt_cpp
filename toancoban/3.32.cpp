#include <iostream>
using namespace std;
long long mul(int a, int b) {
	long long temp = 1;
	while (b) {
		if (b % 2 == 1) temp *= a;
		a *= a;
		b /= 2;
	}
	return temp;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		cout << mul(a, b) << endl;
	}
	return 0;
}