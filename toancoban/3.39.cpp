#include <iostream>
using namespace std;
int main() {
	int n_test;
	cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		for(int i = 0; i < s.length() - 2; i++)
			if (s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4')
			{
				s.erase(i, 3); break;
			}
		cout << s << endl;
	}
	return 0;
}