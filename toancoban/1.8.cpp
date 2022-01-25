#include <iostream>
using namespace std;
bool arr[100000001];

bool isPrime(int n) {
	int temp = 0;
	while (n) {
		temp += n % 10;
		if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) return 0;
		n /= 10;
	}
	if (temp <= 1) return 0;
	for (int i = 2; i <= sqrt(temp); i++)
		if (temp % i == 0)  return 0;
	return 1;
}
int main() {
	memset(arr, 1, sizeof(arr));
	for (int i = 2; i < 100000000; i++) 
		if (arr[i] == 1)
			for (int j = i * 2; j < 100000000; j += i) arr[j] = 0;

	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		if (a <= 1) a = 2;
		int cnt = 0;

		for (int i = a; i <= b; i++)
			if (arr[i] == 1)
				if (isPrime(i) == 1) cnt++;
		cout << cnt << endl;
	}
	return 0;
}