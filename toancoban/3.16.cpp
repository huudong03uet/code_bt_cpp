#include <iostream>
using namespace std;
int factor(int n) {
	if (n <= 1) return 1;
	else return n * factor(n - 1);
}

int sumOfFactor(int n) {
	int sum = 0;
	while (n) {
		sum += factor(n % 10);
		n /= 10;
	}
	return sum;
}
int main() {
	int a, b; cin >> a >> b;
	for (int i = a; i <= b; i++)
		if (i == sumOfFactor(i)) cout << i << " ";
	return 0;
}