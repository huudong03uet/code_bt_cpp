#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test;	
	while (n_test--) {
		multiset<string, greater<>> st;
		int n; cin >> n; string temp;
		for (int i = 0; i < n; i++) {
			cin >> temp; st.insert(temp);
		}

		for (auto i : st) cout << i;
		cout << endl;
	}
	return 0;
}