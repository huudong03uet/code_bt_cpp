#include <iostream>
using namespace std;
bool solve(long long a,long long b) {
	if (b == 0) {
		if (a == 1) return 1;
		else return 0;
	}
	else return solve(b, a % b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n; int cnt = 0;
		for (long long i = 1; i <= n; i++)
			if (solve(i, n)) cnt++;
		cout << cnt << endl;
	}
	return 0;
}