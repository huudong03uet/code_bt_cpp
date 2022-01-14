#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main() {
	int n_test; cin >> n_test; cin.ignore();
	while (n_test--) {
		string s1, s2;
		
		getline(cin, s1);
		getline(cin, s2);

		set<string> st;
		set<string> st2;

		stringstream ss(s1);
		string temp;
		while (ss >> temp) st.insert(temp);

		stringstream ss2(s2);
		string temp2;
		while (ss2 >> temp2) st2.insert(temp2);

		for (auto i : st)
			if (st2.find(i) == st2.end()) cout << i << " ";
		cout << endl;
	}

	return 0;
}