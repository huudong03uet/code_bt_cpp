#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, sum; cin >> n >> sum;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());
	int left = 0, right = n - 1;
	while (left < right) {
		int sumlr = v[left].first + v[right].first;
		if (sumlr > sum) right--;
		else if (sumlr < sum) left++;
		else {
			cout << v[left].second + 1 << " " << v[right].second + 1;
			return 0;
		}
	}
	cout << "IMPOSSIBLE";
	return 0;
}