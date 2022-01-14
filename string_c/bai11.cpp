#include <iostream>
using namespace std;
bool check(string s) {
	for (int i = 0; i < s.length() / 2 + 1; i++)
		if (s[i] != s[s.length() - i - 1] || (s[i] - '0') % 2 != 0) return 0;
	return 1;
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