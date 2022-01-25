#include <iostream>
#include <map>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		int n; cin >> n;
		map<int, int> mp;
		int max = 1;
		for (int i = 2; i <= n && n != 1; i++)
			while (n % i == 0) {
				mp[i]++;
				n /= i;
				max = i;
			}
		for (auto i : mp)
			for (int j = 0; j < i.second; j++) cout << i.first << " ";
		cout << endl;

		for (auto i : mp) cout << i.first << " ";
		cout << endl;

		for (auto i : mp) cout << i.first << "(" << i.second << ")" << " ";
		cout << endl;

		for (auto i : mp)
			if (i.first == max) {
				for (int j = 1; j < i.second; j++) cout << i.first << "x";
				cout << i.first;
			}
			else {
				for (int j = 1; j <= i.second; j++) cout << i.first << "x";
			}
		cout << endl;

		for (auto i : mp)
			if (i.first == max) cout << i.first << "^" << i.second;
			else cout << i.first << "^" << i.second << "*";
		cout << endl;
	}
	return 0;
}