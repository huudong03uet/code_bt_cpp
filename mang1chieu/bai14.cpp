#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr1[10001] = { 1 };
int main() {
	int n_test; cin >> n_test;
	while(n_test--){
	memset(arr1,0, sizeof(arr1));
	//for (int i = 0; i < 100; i++) cout << arr1[i] << " ";
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		arr1[x]++;
	}
	for (int i = 1; i < 10001; i++)
		if (arr1[i] % 2 == 1) cout << i << " ";
	cout << endl;
	}
	return 0;
}
//2
//7
//1 2 3 2 3 1 3
//5
//1 1 3 3 2