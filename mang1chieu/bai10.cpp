#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		vector<int> b(arr, arr + n);
		sort(b.begin(), b.end());
		for (int i = 0; i < n; i++) {
			auto it = upper_bound(b.begin(), b.end(), arr[i]);
			if (it == b.end()) cout << "_" << " ";
			else cout << *it << " ";
		}
		delete[] arr;
	}
	return 0;
}