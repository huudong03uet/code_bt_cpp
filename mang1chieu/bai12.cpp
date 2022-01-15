#include <iostream>
using namespace std;

int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		int arr1[10000] = { 0 };
		for (int i = 0; i < n; i++) {
			for (int j = 2; j <= arr[i] / 2; j++) {
				if (arr[i] % j == 0) arr1[j]++;
			}
			arr1[arr[i]]++;
		}
		int cnt = 0;
		for (int j = 2; j < 10000; j++)
			if (arr1[j] == n) cnt++;
		cout << cnt << endl;
		delete[] arr;
	}
	return 0;
}