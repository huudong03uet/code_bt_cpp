#include <iostream>
using namespace std;
int main() {
	long long n; cin >> n;
	while (n) {
		int temp = n % 10;
		if (temp == 6 || temp == 8 || temp == 0) n /= 10;
		else {
			cout << 0 << endl; return 0;
		}
	}
	cout << 1 << endl;
	return 0;
}