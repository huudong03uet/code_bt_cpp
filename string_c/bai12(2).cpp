#include <iostream>
using namespace std;
string solve(string s) {
	int i = s.length() - 2;
	while (i >= 0 && s[i] <= s[i + 1] ) {
		--i;
	}
	if (i == -1) return "-1";
	int j = s.length() - 2;
	while (s[i] <= s[j] || (s[j] == s[j - 1])) {
		j--;
	}
	swap(s[i], s[j]);
	if (s[0] == '0') return "-1";
	return s;

}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}