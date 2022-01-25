#include <iostream>
using namespace std;
bool arr[1000001];
int main() {
	memset(arr, 1, sizeof(arr));
	int n; cin >> n;
	for (int i = 2; i <= sqrt(n); i++)
		if (arr[i] == 1)
			for (int j = i * 2; j <= n; j += i)
				arr[j] = 0;
	for (int i = 2; i <= n; i++)
		if (arr[i] == 1) cout << i << " ";
	return 0;
}