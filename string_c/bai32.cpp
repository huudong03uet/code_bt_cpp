#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		int res = 0;
		for (int i = 0; i < s.length(); i++)
			if (s[i] == '1') res = (res * 2 + 1) % 5;
			else res = (res * 2) % 5;
		if (res == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}