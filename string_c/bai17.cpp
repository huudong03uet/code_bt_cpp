#include <iostream>
using namespace std;
int solve(string s, int k) {
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		int arr[300] = { 0 }; int cnt = 0;
		for (int j = i; j < s.length(); j++) {
			if (arr[s[j]] == 0) { cnt++; arr[s[j]]++; }
			if (cnt == k) ans++;
			if (cnt > k) break;
		}
	}
	return ans;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; int k; cin >> s >> k;
		cout << solve(s, k) << endl;
	}
	return 0;
}