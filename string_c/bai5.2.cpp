#include <iostream>
#include <set>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s; int k; cin >> k;

		set<char> st;
		for (int i = 0; i < s.length(); i++) st.insert(s[i]);
		if (st.size() + k >= 26 && s.length() >= 26) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}