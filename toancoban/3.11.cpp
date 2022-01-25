#include <iostream>
using namespace std;
long long arr[100];
int main() {
	for (int i = 0; i < 100; i++) arr[i] = 0;
	arr[1] = 1;
	for (int i = 2; i <= 92; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	int n; cin >> n;
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}