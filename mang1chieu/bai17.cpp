#include <iostream>
using namespace std;
int main() {
	int n, k; cin >> n>> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int cnt = 0;
	if (arr[0] <= k) cnt++;
	for (int i = 1; i < n; i++)
		if (arr[i] - arr[i - 1] <= k) cnt++;
		else cnt = 1;
	delete[] arr;
	cout << cnt;
	return 0;
}