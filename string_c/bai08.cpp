#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {

		unordered_map<char, int> mp;
		string s; cin >> s;
		for (int i = 0; i < s.length(); i++) mp[s[i]]++;
		for (auto i : mp)
			if (i.second == 1) cout << i.first;
		cout << endl;
	}

	return 0;
}