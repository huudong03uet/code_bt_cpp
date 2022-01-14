#include <iostream>
#include <map>
#include <set>
using namespace std;
multiset <int, greater<>> st;
int mul(int n) {
	if (n <= 1) return 1;
	else return n * mul(n - 1);
}

void phantich(int sum) {
	while (sum % 7 == 0) {
		st.insert(7); sum /= mul(7);
	}
	while (sum % 5 == 0) {
		st.insert(5); sum /= mul(5);
	}
	while (sum % 3 == 0) {
		st.insert(3); sum /= mul( 3);
	}
	while (sum % 2 == 0) {
		st.insert(2); sum /= 2;
	}
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; long long a; cin >> n >> a;
		int sum = 1; 
		for (int i = 0; i < n; i++) {
			sum *= mul(a % 10);
			a /= 10;
		}
		phantich(sum);
		for (auto i:st) cout << i;
		cout << endl;


	}
	return 0;
}