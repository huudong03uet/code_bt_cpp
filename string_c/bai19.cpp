#include <iostream>
#include <string>
using namespace std;
bool check(string s) {
	s.erase(s.begin() + 3);
	bool isTrue = 1;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] >= s[i + 1]) isTrue = 0;
	if (isTrue == 1) return 1;

	isTrue = 1;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] != s[i + 1]) isTrue = 0;
	if (isTrue == 1) return 1;

	if (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]) return 1;

	for (int i = 0; i < s.length(); i++)
		if (s[i] != '8' || s[i] != '6') return 0;

	return 1;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--)
	{
		string temp; cin >> temp;
		string s = temp.substr(5, 6);
		if (check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}