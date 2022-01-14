#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	while (n_test--) {
		string s; getline(cin, s);
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i])) s[i] = tolower(s[i]);
		stringstream ss(s);
		vector<string> s_mail;
		string temp;
		while (ss >> temp) {
			s_mail.push_back(temp);
		}
		cout << s_mail[s_mail.size() - 1];
		for (int i = 0; i < s_mail.size() - 1; i++) cout << s_mail[i][0];
		cout << "@gmail.com" << endl;
	}
	return 0;
}