#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n;
		long long temp = sqrt(n);
		if (temp * temp == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}