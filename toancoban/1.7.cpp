#include <iostream>
using namespace std;
bool arr[10001];
int main() {
	memset(arr, 1, sizeof(arr));
	for (int i = 2; i <= 10000; i++)
		if (arr[i] == 1)
			for (int j = i * 2; j <= 10000; j += i) arr[j] = 0;

	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		for (int i = 2; i <= n - 2; i++)
			if (arr[i] == 1 && arr[n - i] == 1) cout << i << " " << n - i << endl;
		cout << endl;
	}
	return 0;
}