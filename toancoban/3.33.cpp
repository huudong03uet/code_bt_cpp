#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		map<int, int> mp;
		for (int i = 1; i <= n; i++) {
			int tmp = i;
			int j = 2;
			while (tmp != 1) {
				while (tmp % j == 0) {
					mp[j]++;
					tmp /= j;
				}
				j++;
			}
		}

		long long result = 1;
		for (auto i : mp) result *= (i.second + 1);
		cout << result << endl;
	}
	return 0;
}