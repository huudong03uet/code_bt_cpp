#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		bool isTrue = 0; int min = INT_MAX;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = i; j < n; j++) {
				sum += arr[j];
				if (sum > k && (j - i + 1) < min) {
					isTrue = 1;
					min = j - i + 1;
					break;
				}
			}
		}
		if (isTrue == 0) cout << -1 << endl;
		else cout << min << endl;
		delete[] arr;
	}
	return 0;
}
//2
//6 51
//1 4 45 6 0 19
//3 8
//1 2 4