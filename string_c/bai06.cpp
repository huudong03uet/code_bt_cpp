#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	while (n_test--) {
		string s; getline(cin, s);
		int cnt = 0;
		stringstream ss(s); string temp;
		while (ss >> temp) cnt++;
		cout << cnt << endl;
	}
	return 0;
}