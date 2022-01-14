#include <iostream>
#include <string>
#include <vector>
using namespace std; 
void findMin(int k, int n)
{
	if (9 * k < n || k <= 0 || n <= 0) { cout << -1 << endl; return; }

	vector<int> v(k);
	for (int i = k - 1; i >= 0; i--) {
		if (n >= 9) { v[i] = 9; n -= 9; k--; }
		else if (k == 1) v[0] = n;
		else {
			v[k - 1] = n - 1;
			for (int i = k - 2; i >= 1; i--) v[i] = 0;
			v[0] = 1;
		}
	}

	for (int i = 0; i < v.size(); i++) cout << v[i];
	cout << endl;
}
void findMax(int k, int n)
{
	if (9 * k < n || k <= 0 || n <= 0) { cout << -1 << endl; return; }

	vector<int> v(k);
	for (int i = 0; i < k; i++) {
		if (n > 9) { v[i] = 9; n -= 9; }
		else { v[i] = n; n = 0; }
	}

	for (int i = 0; i < v.size(); i++) cout << v[i];
	cout << endl;
}
int main() {
	int n_test; cin >> n_test; 
	while (n_test--) {
		int n, k; cin >> k >> n;
		findMin(k, n);
		findMax(k, n);
	}
	return 0;
}