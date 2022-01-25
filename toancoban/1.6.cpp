#include <iostream>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int main() {
	int n; cin >> n;
	if (n == 0) return 0;
	cout << 2 << endl;
	
	int cnt = 1;
	for (int i = 3; cnt < n ; i += 2)
		if (isPrime(i)) { cout << i << endl; cnt++; }
	return 0;
}