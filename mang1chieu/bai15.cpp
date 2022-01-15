#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		int cnt = 1, max = 1; cin >> arr[0];
		for (int i = 1; i < n; i++) {
			cin >> arr[i];
			if (arr[i] == arr[i - 1]) cnt++;
			else {
				if (cnt > max) max = cnt;
				cnt = 1;
			}
		}
		cout << n - max << endl;
		delete[] arr;
	}
	return 0;
}