#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int sum =  0;
		for (int i = 1; i <= sqrt(n); i++)
			if (n % i == 0) sum += (i + n / i);
		cout << sum << endl;
	}
	return 0;
}