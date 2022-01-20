#include <iostream>
using namespace std;
int main() {
	int n, s; cin >> n >> s;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	int left = 0, right = 0, sum = 0, presum = 0;
	while (right < n) {
		presum += arr[right];
		while (presum > s) {	
			presum -= arr[left];
			left++;
		}
		sum += (right - left + 1);
		right++;
	}
	cout << sum;
	delete[] arr;
	return 0;
}
   