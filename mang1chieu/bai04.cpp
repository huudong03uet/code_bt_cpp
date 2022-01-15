#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.rbegin(), v.rend());
		for (int i = 0; i < k; i++) cout << v[i] << " ";
		cout << endl;
		
	}
	return 0;
}