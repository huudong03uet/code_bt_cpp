#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s1, s2; cin >> s1 >> s2;
		map<char, int> mp1;
		map<char, int> mp2;

		for (int i = 0; i < s2.length(); i++)
			mp2[s2[i]]++;

		int ans = INT_MAX, left = 0, cnt = 0, index = -1;
		for (int i = 0; i < s1.length(); i++) {
			mp1[s1[i]]++;
			if (mp1[s1[i]] <= mp2[s1[i]]) cnt++;
			if (cnt == s2.length()) {
				while (mp1[s1[left]] > mp2[s1[left]]) {
					mp1[s1[left]]--; left++;
				}
				if (ans > i - left + 1) {
					ans = i - left + 1;
					index = left;
				}
			}
			
		}	
		if (index == -1) cout << -1;
		else
			for (int i = index; i <= ans + index - 1; i++) cout << s1[i];
		cout << endl;
	}
	return 0;
}