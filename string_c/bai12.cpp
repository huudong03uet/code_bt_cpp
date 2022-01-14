#include <iostream>
using namespace std;
string check(string s) {
	bool isTrue = 0;
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] > s[i + 1]) isTrue = 1;
	if (isTrue == 0) return "-1";
	int temp = 0, temp1 = 0;
	for (int i = s.length() - 1; i >= 1; i--) {
		if (s[i] < s[i - 1]) { temp = i - 1; break; }
	}
	for (int i = temp + 1; i < s.length(); i++) {
		if (s[i] < s[temp]) temp1 = i;
	}
	int temp2 = temp1;
	for (int i = temp1; i >= temp; i--)
		if (s[i] == s[temp1]) temp2 = i;
	swap(s[temp], s[temp2]);
	return s;
}
int main() {
	int n_test; cin >> n_test;
	
	while (n_test--) {
		string s; cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}
// 123756
// 123