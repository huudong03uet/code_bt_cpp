#include <iostream>
using namespace std;
void solve(string s) {
	bool arr[10] = { 0 };
	if (s[0] == '0' || s.length() < 20 || s.length() > 1000) {
		cout << "INVALID" << endl; return;
	}

	for (int i = 0; i < s.length(); i++)
		if (isalpha(s[i]) == true)  { cout << "INVALID" << endl; return; }
		else arr[s[i] - '0'] = true;

	for (int i = 0; i <= 9; i++)
		if (arr[i] == false) {
			cout << "NO" << endl;
			return;
		}
	cout << "YES" << endl;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		solve(s);
	}
	return 0;
}