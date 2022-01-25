#include <iostream>
using namespace std;
long long arr[100];
int main() {
	for (int i = 0; i <= 92; i++) arr[i] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 92; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	
	int n_test; cin >> n_test;
	while (n_test--) {
		long long n; cin >> n;
		bool hasFibo = 0;
		for(int i = 0; i <= 92; i++)
			if (arr[i] == n) {
				hasFibo = 1;
				cout << "YES" << endl;
			}
		if (hasFibo == 0) cout << "NO" << endl;

	}
	return 0;
}