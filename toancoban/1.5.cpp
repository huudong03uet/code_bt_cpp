#include <iostream>
using namespace std;
bool isPrime(int n) {

	while (n) {
		if (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7) { n /= 10; }
		else return 0;
	}
	return 1;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		bool arr[1000001];
		memset(arr, 1, sizeof(arr));
		for (int i = 2; i <= sqrt(b); i++)
			if (arr[i] == 1)
				for (int j = i * 2; j <= b; j += i) arr[j] = 0;
		int cnt = 0;
		for (int i = a; i <= b; i++)
			if (arr[i] == 1 && isPrime(i)) cnt++;
		cout << cnt << endl;
	}
	return 0;
}