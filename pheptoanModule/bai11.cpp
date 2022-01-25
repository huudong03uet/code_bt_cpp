#include <iostream>

using namespace std;
int solve(int a,string n) {
	if (n.length() == 1) {
		int tmp = pow(a, n[0] - '0');
		tmp %= 10; return tmp;
	}
	else {
		int tmp2 = pow(a, n[n.length() - 1] - '0');
		tmp2 %= 10;

		n.pop_back();
		int tmp1 = solve(a, n);
		tmp1 %= 10;

		int tmp_mul1 = 1;
		for (int i = 0; i < 10; i++) {
			tmp_mul1 *= tmp1;
			tmp_mul1 %= 10;
		}

		return (tmp_mul1 * tmp2) % 10;
	}
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s, n; cin >> s >> n;
		int a = s[s.length() - 1] - '0';
		cout << solve(a, n) << endl;
	}
	return 0;
}