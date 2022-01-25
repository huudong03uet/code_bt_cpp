#include <iostream>
using namespace std;
int main() {
	int n_test;
	cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k; int sum = 0;
		for (int i = 1; i <= n; i++)
			sum += i % k;
		cout << sum << endl;
	}
	return 0;
}