#include <iostream>
using namespace std;
bool solve(long long a, long long b) {
	if (b == 0) {
		if (a == 1) return 1;
		else return 0;
	}
	else solve(b, a % b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		long long a, b; cin >> a >> b;
		if (solve(a, b)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}