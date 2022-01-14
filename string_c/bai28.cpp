#include <iostream>
using namespace std;
int calGcd(int x, int y) {
	if (y == 0) return x;
	else return calGcd(y, x % y);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, x, y; cin >> a >> x >> y;
		int gcd = calGcd(x, y);
		for (int i = 0; i < gcd; i++) cout << a;
		cout << endl;
	}
	return 0;
}