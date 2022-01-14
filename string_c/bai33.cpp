#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long res = 0;
		string s; long long n;
		cin >> s >> n;
		for (int i = 0; i < s.length(); i++)
		{
			res = res * 10 + s[i] - '0';
			res %= n;
		}
		cout << res << endl;
	}
	return 0;
}