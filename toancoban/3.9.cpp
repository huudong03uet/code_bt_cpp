#include <iostream>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string n; cin >> n; int sum = 0;
		for (int i = 0; i < n.length(); i++)
			sum += (n[i] - '0');
		cout << sum << endl;
	}
	return 0;
}