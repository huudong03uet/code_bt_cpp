#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1;
	string s2;
	getline(cin, s1);
	cin >> s2;
	stringstream ss(s1);
	string temp;
	while (ss >> temp) {
		if (temp != s2) cout << temp << " ";
	}
	
	return 0;
}