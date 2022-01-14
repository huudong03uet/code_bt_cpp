#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		map<char, int> mp;
		for (int i = 0; i < s.length(); i++)
			mp[s[i]]++;
		int sum = 0;
		for (auto i : mp)
			if(i.second > 1) sum += (i.second - 1) * i.second / 2;
		cout << sum + s.length();
	}
	return 0;
}