#include <iostream>
using namespace std;
int main() {
	string s; cin >> s;
	int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt7 = 0;
	for (int i = 0; i < s.length(); i++) {
		int tmp = s[i] - '0';
		if (tmp == 2) cnt2++;
		if (tmp == 3) cnt3++;
		if (tmp == 5) cnt5++;
		if (tmp == 7) cnt7++;
	}
	if (cnt2 > 0) cout << 2 << " " << cnt2 << endl;
	if (cnt3 > 0) cout << 3 << " " << cnt3 << endl;
	if (cnt5 > 0) cout << 5 << " " << cnt5 << endl;
	if (cnt7 > 0) cout << 7 << " " << cnt7 << endl;
	return 0;
}