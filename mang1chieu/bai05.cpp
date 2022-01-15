#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test; 
	while (n_test--) {
		int n; cin >> n;
		bool arr[10001] = { false };
		bool arr1[10001] = { false };
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			if (arr[temp] == true && arr1[temp] == true) cnt++;
			if (arr[temp] == true && arr1[temp] == false) {
				cnt += 2; arr1[temp] = true;
			}
			
			if (arr[temp] == false) {
				arr[temp] = true;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}