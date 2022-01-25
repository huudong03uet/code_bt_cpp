#include <iostream>
using namespace std;
bool check(string s) {
	if ((s[0] - '0') != 2 * (s[s.length() - 1] - '0')
		&& 2 * (s[0] - '0') != (s[s.length() - 1] - '0')) return 0;
	s.pop_back(); s.erase(0, 1);
	string temp = s;
	reverse(temp.begin(), temp.end());
	if (temp == s) return 1;
	else return 0;
}

int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		if (check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}