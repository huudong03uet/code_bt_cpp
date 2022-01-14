#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s; int n; cin >> n;
		int cnt = 0;
		for (int i = s.length() - 1; i >= 0; i--)
			if (s[i] == '1') break;
			else cnt++;
		if (cnt >= n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}