#include <iostream>
using namespace std;
bool hasSix(int n) {
	while (n) {
		if (n % 10 == 6) return 1;
		n /= 10;
	}
	return 0;
}
bool hasLastSum(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	if (sum % 10 == 8)return 1;
	else return 0;
}
int main() {
	long long a, b; cin >> a >> b;
	int cnt = 0;
	for (int i = a; i <= b; i++)
		if (hasSix(i) && hasLastSum(i)) cnt++;
	cout << cnt << endl;
	return 0;
}