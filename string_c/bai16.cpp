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
		string temp; int n_min = INT_MIN;
		while (ss >> temp) {
			if (stoi(temp) > n_min) n_min = stoi(temp);
		}
		cout << n_min << endl;
	}
	return 0;
}