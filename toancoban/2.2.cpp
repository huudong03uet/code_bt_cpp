#include <iostream>
using namespace std;
void solve(int n) {
	int i = 2;
	while (n != 1 && i <= n) {
		if (n % i == 0) {
			int cnt = 0;
			while (n % i == 0) { 
				cnt++; n /= i;
			}
			cout << i << "(" << cnt << ")" << " ";
		}
		i++;
	}
}
int main() {
	int n_test; cin >> n_test;
	for (int i = 1; i <= n_test; i++)
	{
		int n; cin >> n;
		cout << "#TC" << i << ": ";
		solve(n);
		cout << endl;
	}
	return 0;
}