#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		int* arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		int* arr1 = new int[n];
		for (int i = 0; i < n; i++) {
			bool isTrue = 0;
			for (int j = 0; j < n; j++)
				if (arr[j] == i) {
					isTrue = 1;
					arr1[i] = i; break;
				}
			if (isTrue == 0) arr1[i] = -1;
		}
		for (int i = 0; i < n; i++) cout << arr1[i] << " ";
		cout << endl;
		delete[] arr;
		delete[] arr1;
	}
	return 0;
}
//2
//10
//-1 -1 6 1 9 3 2 -1 4 -1
//6
//0 -3 1 -2 3 -4