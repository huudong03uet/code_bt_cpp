#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	vector<string> sum;
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
		string gmail = "";
		gmail += s_mail[s_mail.size() - 1];
		for (int i = 0; i < s_mail.size() - 1; i++) gmail.push_back(s_mail[i][0]);
		
		sum.push_back(gmail);
	}
	
	map<string, int> mp;
	for (int i = 0; i < sum.size(); i++) {
		mp[sum[i]]++;
		if (mp[sum[i]] == 1) cout << sum[i] << "@gmail.com" << endl;
		else cout << sum[i] << mp[sum[i]] << "@gmail.com" << endl;
	}
	return 0;
}