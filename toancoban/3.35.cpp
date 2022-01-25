#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n;
		if (n % 2 == 1) {
			long long temp = n / 2;
			cout << temp - n << endl;
		}
		else {
			cout << n / 2 << endl;
		}
	}
	return 0;
}