#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1 << endl;

	}
	return 0;
}