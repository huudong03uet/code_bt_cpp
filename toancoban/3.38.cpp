#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		string tmp;
		bool invalid = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0') tmp.push_back('0');
			else if (s[i] == '1') tmp.push_back('1');
			else if (s[i] == '8') tmp.push_back('0');
			else if (s[i] == '9') tmp.push_back('0');
			else invalid = 1;
		}
		while (tmp[0] == '0') tmp.erase(0, 1);
		if (tmp.length() == 0) invalid = 1;
		if (invalid == 1) cout << "INVALID" << endl;
		else cout << tmp << endl;
	}
	return 0;
}