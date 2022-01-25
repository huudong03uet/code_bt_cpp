#include <iostream>

using namespace std;
bool arr[1000001];
int main() {
	int a, b; cin >> a >> b;
	memset(arr, 1, sizeof(arr));
	for (int i = 2; i <= sqrt(b); i++) {
		if (arr[i] == 1)
			for (int j = i * 2; j <= b; j += i) arr[j] = 0;
	}
	for (int i = a; i <= b; i++)
		if (arr[i] == 1 && i != 0 && i != 1) cout << i << " ";
	return 0;
}