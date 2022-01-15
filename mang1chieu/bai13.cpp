#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		int* arr_sum = new int[n];  int cnt = 0;
		cin >> arr[0];
		arr_sum[0] = arr[0];
		for (int i = 1; i < n; i++) { 
			cin >> arr[i];
			arr_sum[i] = arr_sum[i - 1] + arr[i];
		}
		for (int i = 1; i < n - 1; i++) {
			if (arr_sum[n - 1] == 2 * arr_sum[i - 1] + arr[i]) {
				cnt++;
				cout << i << " ";
			}
		}
		if (cnt == 0) cout << "-1" << endl;
		else cout << endl;
		delete[] arr;
	}
	return 0;
}