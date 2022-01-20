#include <iostream>
using namespace std;
int main() {
	int n; cin >> n; int s; cin >> s;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int left = 0, right = 0, presum = 0, result = 100000;
	while (right < n) {
		presum += arr[right];
		while (presum >= s ) {
			if ((right - left + 1) < result) result = right - left + 1;
			presum -= arr[left];
			left++;
		}
		right++;
	}
	if (result == 100000) cout << "-1" << endl;
	else cout << result << endl;
	delete[] arr;
	return 0;
}