#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, p; cin >> n >> p;
		int cnt = 0;
		for (int i = 2; i <= n; i++) {
			int temp = i;
			while (temp % p == 0) {
				cnt++;
				temp /= p;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}