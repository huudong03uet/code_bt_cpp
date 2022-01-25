#include <iostream>
using namespace std;
int mod(int n, string s) {
	if (s.length() == 1) {
		int tmp = pow(n, s[0] - '0');
		return tmp %= 5;
	} else {
		int tmp2 = pow(n, s[s.length() - 1] - '0');
		tmp2 %= 5;
		s.pop_back();

		int tmp1 = mod(n, s);
		int multemp = 1;
		for (int i = 1; i <= 10; i++) {
			multemp *= tmp1; multemp %=5;
		}

		int mul = multemp * tmp2;
		mul %= 5;
		return mul;
	}
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		cout << (1 + mod(2, s) + mod(3, s) + mod(4, s)) % 5 << endl;
	}
	return 0;
}