#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_line; cin >> n_line; cin.ignore();
	map <string, int> mp;
	for (int i = 0; i < n_line; i++) {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++)
			if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?' || s[i] == '-') s[i] = ' ';
		stringstream ss(s);
		string temp;
		while (ss >> temp) mp[temp]++;
	}
	for(int j = 1000; j >= 1; j--)
		for (auto i : mp) 
			if(i.second == j) cout << i.first << " " << i.second << endl;
	return 0;
}