#include <bits/stdc++.h>

using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	while (n_test--) {
		string s; getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		string temp;
		while (ss >> temp) v.push_back(temp);
		for (int i = v.size() - 1; i >= 0; i--)
			if (i != 0) cout << v[i] << " ";
			else cout << v[i];
		cout << endl;
	}
	return 0;
}