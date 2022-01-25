#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int cnt = 0, n; cin >> n;
		for (int i = 1; i <= sqrt(n); i++)
			if (n % i == 0) cnt += 2;
		cout << cnt << endl;
	}
	return 0;
}