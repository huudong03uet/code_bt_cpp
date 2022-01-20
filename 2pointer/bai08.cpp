#include <iostream>
#include <vector>
using namespace std;
int main() {
	int arr[10001] = { 0 };
	int n; cin >> n; int k; cin >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	int left = 0, right = 0, cnt = 0, result = 0;
	while (right < n) {
		arr[v[right]]++;
		if (arr[v[right]] == 1) cnt++;
		while (cnt > k) {
			arr[v[left]]--;
			if (arr[v[left]] == 0) cnt--;
			left++;
		}
		result += (right - left + 1);
		right++;
	}
	cout << result;
	return 0;
}