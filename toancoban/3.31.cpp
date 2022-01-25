#include <iostream>
using namespace std;
bool isTrue(int a, int b) {
	if (b == 0) {
		if (a == 1) return 1;
		else return 0;
	}
	else return isTrue(b, a % b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			int cnt = 0;
			for (int j = 1; j <= i; j++)
				if (isTrue(i, j)) cnt++;
			cout << cnt << " ";
		}
		cout << endl;
	}
	return 0;
}