#include <iostream>
using namespace std;
int main() {
	int arr1[11] = { 0 }, arr2[11] = { 0 };
	arr1[1] = 1;
	int n; cin >> n;
	cout << 1 << endl;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 1) arr1[j] = arr2[j - 1] + arr2[j];
			else arr2[j] = arr1[j] + arr1[j - 1];
		}
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 1) cout << arr1[j] << " ";
			else cout << arr2[j] << " ";
		}
		cout << endl;
	}
	return 0;

}