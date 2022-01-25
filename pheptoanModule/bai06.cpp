#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		int tmp = ceil(a * 1.0 / b);
		cout << tmp * b - a << endl;
	}
	return 0;
}