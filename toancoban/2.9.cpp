#include <iostream>
using namespace std;
bool arr[1000001];
int main() {
	memset(arr, 0, sizeof(arr));
	int a, b; cin >> a >> b;
	for (int i = 2; i <= sqrt(b); i++)
		if (arr[i] == 0)
			for (int j = i * i; j <= b; j += i * i)
				arr[j] = 1;
	for (int i = a; i <= b; i++)
		if(arr[i] == 1) cout << i << " ";
	return 0;
}