#include <iostream>
using namespace std;
int arr[100];
bool isPrime(int n) {
	if (n <= 1) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}
int sum_of_n(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int main() {
	arr[0] = 0; arr[1] = 1;
	for (int i = 2; i <= 30; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	int a, b; cin >> a >> b;
	bool hasNumber = 0;
	for(int i = a; i <= b; i++)
		if (isPrime(i)) {
			for (int j = 0; j <= 30; j++)
				if (arr[j] == sum_of_n(i)) {
					cout << i << " ";
					hasNumber = 1;
				}
		}
	if (hasNumber == 0) cout << "-1" << endl;
	return 0;
}