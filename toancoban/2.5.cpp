#include<iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int cnt = 0;
		for (int i = 5; i <= n; i++) {
			int temp = i;
			while (temp % 5 == 0) {
				cnt++;
				temp /= 5;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}