#include <iostream>
#include <string>
using namespace std;
bool hasReverse(int n) {
	string temp = to_string(n);
	string s = temp;
	reverse(temp.begin(), temp.end());
	if (temp == s) return 1;
	else return 0;
}
bool notHasNine(int n) {
	while (n) {
		if (n % 10 == 9) return 0;
		n /= 10;
	}
	return 1;
}
int main() {
	int n; cin >> n;
	int cnt = 0;
	for (int i = 2; i <= n; i++)
		if (hasReverse(i) && notHasNine(i)) { 
			cout << i << " "; cnt++;
	}
	cout << endl << cnt << endl;
	return 0;
}