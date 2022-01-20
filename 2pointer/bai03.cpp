#include <iostream>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	int* arr1 = new int[n];
	int* arr2 = new int[m];
	for (int i = 0; i < n; i++) cin >> arr1[i];
	for (int i = 0; i < m; i++) cin >> arr2[i];
	int index1 = 0, index2 = 0, sum = 0;
	while (index1 < n && index2 < m) {
		if (arr1[index1] < arr2[index2]) {
			index1++;
		}
		else if (arr1[index1] > arr2[index2]) {
			index2++; 
		}
		else {
			int temp = arr1[index1], cnt1 = 0, cnt2 = 0;
			while (arr1[index1] == temp && index1 < n) { index1++; cnt1++; }
			while (arr2[index2] == temp && index2 < m) { index2++; cnt2++; }
			sum += cnt1 * cnt2 ;
		}
	}
	cout << sum;

	return 0;
}