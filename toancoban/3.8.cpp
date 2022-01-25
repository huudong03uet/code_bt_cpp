#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n; long long sum = 0;
		for (long long i = 2; i <= sqrt(n); i++)
			if (n % i == 0) sum += (i + n / i);
		if (sum + 1 == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}