#include <iostream>
#include <string>
using namespace std;
bool chiaHetCho8(string s) {
	if (s.length() == 1 || s.length() == 2) return stoi(s) % 8 == 0;
	else return (s[s.length() - 1] + s[s.length() - 2] + s[s.length() - 3] - 3 * '0') % 8 == 0;
}
bool khongChiaHetCho3(string s) {
	int temp = 0;
	for (int i = 0; i < s.length(); i++)
		temp += (s[i] - '0');
	if (temp % 3 == 0) return 0;
	else return 1;
}
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		int cnt = 0;
		for(int i = 0; i < s.length(); i++)
			for (int j = 1; j < s.length() - i + 1; j++) {
				string temp = s.substr(i, j);
			//	cout << temp << " ";
				if (chiaHetCho8(temp) && khongChiaHetCho3(temp)) cnt++;
			}
		cout << cnt << endl;
	}
	return 0;
}