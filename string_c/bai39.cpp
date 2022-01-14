#include <iostream>
#include <string>
using namespace std;

int sumChar(string s) {
	int temp = 0;
	for (int i = 0; i < s.length(); i++)
		temp += (s[i] - '0');
	return temp;
}

int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		int sum_char = sumChar(s);
		if (sum_char == 9 || sumChar(to_string(sum_char)) == 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}