#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int i = 2;
		while (n != 1) {
			while (n % i == 0) {
				n /= i;
				if (n == 1) cout << i << endl;
			}
			i++;
		}
	}
	return 0;
}