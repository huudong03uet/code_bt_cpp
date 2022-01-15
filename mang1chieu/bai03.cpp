#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		int nMin = INT_MAX;
		for (int i = 1; i < n; i++) {
			nMin = min(nMin, arr[i] - arr[i - 1]);
		}
		cout << nMin << endl;
		delete[] arr;
	}
	return 0;
}