#include <bits/stdc++.h>
using namespace std;
long long sumMax(string a, string b) {
	for (int i = 0; i < a.length(); i++)
		if (a[i] == '5') a[i] = '6';
	for (int i = 0; i < b.length(); i++)
		if (b[i] == '5') b[i] = '6';
	return stoll(a) + stoll(b);
}
long long sumMin(string a, string b) {
	for (int i = 0; i < a.length(); i++)
		if (a[i] == '6') a[i] = '5';
	for (int i = 0; i < b.length(); i++)
		if (b[i] == '6') b[i] = '5';
	return stoll(a) + stoll(b);
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string a, b;
		cin >> a >> b;
		cout << sumMax(a, b) << " " << sumMin(a, b) << endl;
	}
	return 0;
}