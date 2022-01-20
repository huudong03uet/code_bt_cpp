#include <iostream>
using namespace std;
int main() {
	int n; int s; cin >> n >> s;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int left = 0, right = 0, presum = 0, result = 0;

	while (right < n) {
		presum += arr[right];
		while (presum > s) {
			presum -= arr[left];
			left++;
		}
		if ((right - left + 1) > result) result = right - left + 1;
		right++;
	}
	if (result == 0) cout << -1 << endl;
	else cout << result << endl;
	delete[] arr;
	return 0;
}