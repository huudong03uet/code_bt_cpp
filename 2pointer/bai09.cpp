#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	multiset<int> ms;
	int right = 0, left = 0, cnt = 0;
	while (right < n) {
		ms.insert(v[right]);
		while (*ms.rbegin() - *ms.begin() > k) {
			auto it = ms.find(v[left]);
			ms.erase(it);
			left++;
		}
		cnt += right - left + 1;

		right++;
	}
	cout << cnt;
	return 0;
}