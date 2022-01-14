#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s; int sum = 0;
		for (int i = 0; i < s.length() - 2; i++)
			if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0') { 
				s.erase(i, 3); sum += 3; i = -1;
			}
		cout << sum << endl;
	}
	return 0;
}