#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main() {
	string s; cin >> s;
	unordered_map<char, int> ump;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7')
			ump[s[i]]++;
	for (auto i : ump)
		cout << i.first << " " << i.second << endl;
	return 0;
}