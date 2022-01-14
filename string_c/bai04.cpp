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

		name[name.size() - 1][0] = toupper(name[name.size() - 1][0]);
		
		cout << name[name.size() - 1]; cout << ", ";
		for (int i = 0; i < name.size() - 1; i++) {
			name[i][0] = toupper(name[i][0]);
			cout << name[i] << " ";
		}
		cout << endl;
		
	}
	return 0;
}