#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		int temp = 0;
		for (int i = 0; i < s.length(); i++) {
			temp = temp * 10 + s[i] - '0';
			temp %= 11;
		}
		if (temp == 0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}