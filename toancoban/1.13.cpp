#include <iostream>
using namespace std;
int arr[100001];
int main() {
	for (int i = 0; i <= 100000; i++) arr[i] = 1;
	int temp = sqrt(100000);
	for (int i = 2; i <= temp; i++)
		if (arr[i] == 1)

			for (int j = i; j <= 100000; j += i) 
				
				arr[j] = i;

	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}	
	return 0;
}