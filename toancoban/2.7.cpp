#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int sumOfNumber(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n; int sumofn = sumOfNumber(n);
		int temp = 0;
		int i = 2; bool nIsPrime = 1;
		while (n != 1 && i <= n) {
			while (n % i == 0) {
				n /= i;
				nIsPrime = 0;
				temp += sumOfNumber(i);
			}
			i++;
		}
		if (temp == sumofn && nIsPrime == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}