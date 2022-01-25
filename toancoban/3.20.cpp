#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int solve(int n) {
	int cnt = to_string(n).length(), sum = 0;
	while (n) {
		sum += pow(n % 10, cnt);
		n /= 10;
	}
	return sum;
}
int main() {
	int n; cin >> n;
	if (n == solve(n)) cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}