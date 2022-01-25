#include <iostream>
#include <string>
using namespace std;
bool isPrime(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

bool lastNumberMax(int n) {
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
		if (s[i] > s[s.length() - 1]) return 0;
	return 1;
}
int main() {
	int n, cnt = 0; cin >> n;
	for (int i = 2; i <= n; i++)
		if (isPrime(i) && lastNumberMax(i)) {
			cout <<
				i << " ";
			cnt++;
		}
	cout << endl << cnt;
	return 0;
}