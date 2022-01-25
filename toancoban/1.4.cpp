#include <iostream>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return 0;
	if (n == 2) return 1;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;

}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		if (isPrime(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}