#include <iostream>
#include <set>
using namespace std;
int main() {
	string s;
	cin >> s;
	set<char> st;
	for (int i = 0; i < s.length(); i++) st.insert(s[i]);
	if (st.size() == 26) cout << "YES";
	else cout << "NO";

	return 0;
}