#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		a %= 10; int result = 1;
		while (b) {
			if (b % 2 == 1) {
				result *= a;
				result %= 10;
			}
			a *= a; a %= 10;
			b /= 2;
		}
		cout << result << endl;
	}
	return 0;
}