#include <iostream>
#include <map>
using namespace std;
bool check(map<int, int> mp) {
	if (mp.size() != 3) return 0;
	for (auto i : mp)
		if (i.second != 1) return 0;
	return 1;
}
int main() {
	int n_test; cin >> n_test;
	while(n_test--){
		int n; cin >> n;
		map<int, int> mp;
		int i = 2; 
		while (n != 1 && i <= n) {
			while (n % i == 0) {
				n /= i;
				mp[i]++;
			}
			i++;
		}
		//for (auto i : mp) cout << i.second;
		if (check(mp)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}