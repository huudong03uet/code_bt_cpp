#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int lcm(int a, int b) {
	return a * b / gcd(a, b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		cout << gcd(a, b) << " " << lcm(a, b) << endl;
	}
	return 0;
}