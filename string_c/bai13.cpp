#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		map<char, int>mp;
		for (int i = 0; i < s.length(); i++)
			mp[s[i]]++;

		int char_max = 0;
		for (auto i : mp)
			if (i.second > char_max) char_max = i.second;
		if (char_max > ((int)s.length() - char_max + 1)) cout << 0 << endl;
		else cout << 1 << endl;
	}
	return 0;
}