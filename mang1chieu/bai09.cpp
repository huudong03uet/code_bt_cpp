#include <iostream>
using namespace std;
int arr[1001];
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		for (int i = 0; i < n; i++) cin >> arr[i];
		int sum_max = 0, start_val = 0;
		for (int i = 0; i < k; i++) sum_max += arr[i];
		for (int i = 0; i < n - k; i++) {
			int temp = sum_max - arr[i] + arr[i + k];
			if (temp > sum_max) {
				sum_max = temp;
				start_val = i + 1;
			}
		}
		for (int i = start_val; i < start_val + k; i++) cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}