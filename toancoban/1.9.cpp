#include <iostream>
using namespace std;
bool check(int a,int b) {
	for (int i = 2; i <= sqrt(a); i++)
		if (a % i == 0 && b % i == 0) return 0;
	return 1;
}
int main() {
	int a, b; cin >> a >> b;
	for (int i = a; i <= b; i++)
		for (int j = i + 1; j <= b; j++)
			if (check(i, j)) cout << "(" << i << "," << j << ")" << endl;
	return 0;
}