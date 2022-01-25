#include <iostream>
using namespace std;
bool arr[1000001];
int main() {
	memset(arr, 1, sizeof(arr));

	for (int i = 2; i <= 1000; i++)
		if (arr[i] == 1)
			for (int j = i * 2; j <= 1000000; j += i) arr[j] = 0;
	int n_test; cin >> n_test;
	while (n_test--) {
		long long a, b,cnt = 0; cin >> a >> b;
		
		if (a < 4) a = 4;
		int temp_a = sqrt(a), temp_b = sqrt(b);
		for (int i = temp_a; i <= temp_b; i++)
			if (arr[i] == 1) cnt++;
		cout << cnt << endl;
	}
	return 0;
}