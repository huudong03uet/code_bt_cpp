#include <iostream>
using namespace std;
int main() {
	int n_test;
	cin >> n_test;
	while (n_test--) {
		int a, b; cin >> a >> b;
		for (int i = ceil(sqrt(a)); i <= floor(sqrt(b)); i++)
			cout << i * i << " ";
		cout << endl;
	}
	return 0;
}