#include <iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		int max = INT_MIN;
		for (int i = 0; i < n; i++) cin >> arr[i];
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (gcd(arr[i], arr[j]) > max) max = gcd(arr[i], arr[j]);
		cout << max << endl;
		delete[] arr;
	}
	return 0;
}
//1
//10
//2 3 1 4 5 7 14 3 5 10