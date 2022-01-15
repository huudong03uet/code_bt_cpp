#include <iostream>
using namespace std;
long long arr[91];
void fibo() {
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i <= 90; i++) arr[i] = arr[i - 1] + arr[i - 2];
}
int main() {
	int n_test; cin >> n_test;
	fibo();
	//for (int i = 0; i <= 90; i++) cout << arr[i] << " ";
	while (n_test--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			for (int j = 1; j <= 90; j++) {
				if (temp == arr[j]) {
					cout << temp << " "; break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}