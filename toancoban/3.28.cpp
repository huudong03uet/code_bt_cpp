#include <iostream>
using namespace std;
long long gcd(long long x, long long y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}

long long lcm(long long x, long long y) {
	long long temp = gcd(x, y);
	return x * y / temp;
}
int main() {
	long long x, y, z, n;
	cin >> x >> y >> z >> n;
	long long temp = lcm(x, y);
	long long result = lcm(temp, z);

	long long pow_n = pow(10, n - 1);
	//cout << pow_n << " " << result << endl;
	long long part = ceill(pow_n*1.0 / result);
	if (part * result > pow_n * 10 - 1) cout << -1;
	else cout << (part * result);
	return 0;
}