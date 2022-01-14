#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	while (n_test--) {
		string s;
		getline(cin, s);
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);

		stringstream ss(s);
		string temp;
		vector<string> name;
		while (ss >> temp) {
			name.push_back(temp);
		}
		for (int i = 0; i < name[name.size() - 1].length(); i++)
			name[name.size() - 1][i] = toupper(name[name.size() - 1][i]);

		for (int i = 0; i < name.size() - 1; i++) {
			name[i][0] = toupper(name[i][0]);
			cout << name[i];
			if (i != name.size() - 2) cout << " ";
			else cout << ",";
		}
		cout << " " << name[name.size() - 1] << endl;
	}
	return 0;
}