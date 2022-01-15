#include <iostream>
using namespace std;

int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		bool arr[100001] = { 0 };
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			arr[x] = 1;
		}
		for (int i = 1; i < 100001; i++) {
			if (arr[i] == 0) {
				cout << i << endl; break;
			}
		}
	}

	return 0;
}