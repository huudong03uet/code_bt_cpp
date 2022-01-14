#include <bits/stdc++.h>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
			if (isalpha(s[i])) s[i] = ' ';
		stringstream ss(s);
		string temp; int sum = 0;
		while (ss >> temp) {
			sum += stoi(temp);
		}
		cout << sum << endl;
	}
	return 0;
}