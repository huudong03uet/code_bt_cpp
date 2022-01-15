#include <iostream>
using namespace std;
int main() {
	int n, sum = 0; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1]) sum += arr[i - 1] - arr[i];

	}
	cout << sum;
	delete[] arr;
	return 0;
}