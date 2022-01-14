#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s;
		cin >> s;
		map<char, int> mp1;
		map<char, int> mp2;
		for (int i = 0; i < s.length(); i++) mp1[s[i]]++;
		
		int cnt = 0, len = INT_MAX, index = -1, left = 0;
		for (int i = 0; i < s.length(); i++) {
			if (mp2[s[i]] == 0) cnt++;
			mp2[s[i]]++;
			if (cnt == mp1.size()) {
				while (mp2[s[left]] > 1) {
					mp2[s[left]]--; left++;
				}
				if (len > i - left + 1) len = i - left + 1;
			}

		}
		cout << cnt << endl;
	}
	return 0;
}