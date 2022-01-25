#include <iostream>
using namespace std;
bool isPrime(long long n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long a, b; cin >> a >> b;
		long long tmp = a - b;
		bool hasNumber = 0;
		for(long long i = 2; i <= tmp; i++)
			if (isPrime(i)) {
				int x = tmp / i;
				if (x * i == tmp) {
					hasNumber = 1;
					break;
				}
			}
		if (hasNumber == 0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}