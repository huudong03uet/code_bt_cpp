#include <iostream>
using namespace std;

string sum(string a, string b) {
	if (a.length() < b.length()) swap(a, b);
	int n = a.length(), m = b.length();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(n - m, '0');
	string res = "";
	int mmr = 0;
	for (int i = 0; i < n; i++) {
		int temp = (a[i] - '0') + (b[i] - '0') + mmr;
		res += (char)(temp % 10 + '0');
		mmr = temp / 10;
	}
	if (mmr == 1) res += (char)(mmr + '0');
	reverse(res.begin(), res.end());
	return res;
}

bool check(string s, int left, int len1,int len2) {
	string s1 = s.substr(left, len1);
	string s2 = s.substr(left + len1, len2);
//	cout << s1 << " " << s2 << endl;
	string s3 = sum(s1, s2);
	if (s3.length() > (s.length() - len1 - len2 - left)) return 0;
	if (s3 == s.substr(left + len1 + len2, s3.length())) {
		if (s.length() == left + len1 + len2 + s3.length()) return true;
		return check(s, left + len1, len2, s3.length());
	}
	return false;
}

void solve(string s) {
	for (int i = 1; i < s.length(); i++) {
		for (int j = 1; j <= s.length() - i; j++) {
			if (check(s, 0, i, j)) {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "No" << endl;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		solve(s);
	}
	return 0;
}