#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		string temp = s;
		reverse(s.begin(), s.end());
		if (temp == s) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}