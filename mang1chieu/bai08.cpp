#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int arr[1001] = { 0 };
		for (int i = 0; i < n; i++) cin >> arr[i];
		int temp = INT_MIN; int min_val = arr[0];
		for (int i = 1; i < n; i++) {
			if (arr[i] - min_val > temp) temp = arr[i] - min_val;
			if (arr[i] < min_val) min_val = arr[i];
		}
		if (temp == INT_MIN) cout << -1 << endl;
		else cout << temp << endl;
	}
	return 0;
}