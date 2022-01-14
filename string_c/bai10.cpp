#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
	int n; cin >> n; cin.ignore();
	set<string> st;
	while (n--) {
		string s; getline(cin, s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}