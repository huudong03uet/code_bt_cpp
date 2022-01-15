#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n, k; cin >> n >> k;
		int* arr = new int[n];
		int* arr1=new int[k];
		for (int i = 0; i < n; i++) cin >> arr[i];
		for (int i = 0; i < k; i++) cin >> arr1[i];
		sort(arr1, arr1 + k);
		int temp = 0;
		for (int i = 1; i < k; i++) {
			if (arr1[i] != arr1[i - 1] + 1) 
			{
				sort(arr + arr1[temp] - 1, arr + arr1[i - 1] + 2);
				temp = i;
			}
		}
		sort(arr + arr1[temp] - 1, arr + arr1[k - 1] + 1);
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
		bool isTrue = 1;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				isTrue = 0; cout << "NO" << endl; break;
			}
		}
		if (isTrue == 1) cout << "YES" << endl;
		delete[] arr;
		delete[] arr1;
	}
	return 0;
}
//6
//3 2
//3 2 1
//1 2
//4 2
//4 1 2 3
//3 2
//5 1
//1 2 3 4 5
//1
//4 2
//2 1 4 3
//1 3
//4 2
//4 3 2 1
//1 3
//5 2
//2 1 2 3 3 
//1 4