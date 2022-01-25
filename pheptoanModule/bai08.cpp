#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int a = 8, result = 1;
	while (n) {
		if (n % 2 == 1) {
			result *= a;
			result %= 10;
		}
		a *= a;
		a %= 10;
		n /= 2;
	}
	cout << result << endl;
	return 0;
}