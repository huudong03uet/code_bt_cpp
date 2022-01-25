#include <bits/stdc++.h>

using namespace std;
bool arr[1000001];
int solve(int a, int b) {
	int cnt = 0;
	for(int i = a; i <= b; i++)
		if (arr[i] == 1) {
			string s = to_string(i);
			bool isTrueUp = 1, isTrueDown = 1;
			for (int j = 0; j < s.length() - 1; j++) {
				if (s[j] >= s[j + 1]) isTrueUp = 0;
				if (s[j] <=s[j + 1]) isTrueDown = 0;
			}
			if (isTrueUp == 1 || isTrueDown == 1) cnt++;
		}
	return cnt;

}
int main() {
	memset(arr, 1, sizeof(arr));
	for (int i = 2; i <= 1000000; i++)
		if (arr[i] == 1)
			for (int j = i * 2; j <= 1000000; j += i)
				arr[j] = 0;

	int a = 0, b = 0, n; cin >> n;

	if (n == 1) { cout << 4 << endl; return 0; }
	if (n == 2) { a = 10; b = 99; }
	if (n == 3) { a = 100; b = 999; }
	if (n == 4) { a = 1000; b = 9999; }
	if (n == 5) { a = 10000; b = 99999; }
	if (n == 6) { a = 100000; b = 999999; }
	if (n > 6) return 0;
	cout << solve(a, b) << endl;
	return 0;
}