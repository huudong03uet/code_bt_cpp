#include <iostream>
#include <string>
using namespace std;
bool hasReverse(int n) {
	string s = to_string(n);
	string temp = s;
	reverse(s.begin(), s.end());
	if (s == temp) return 1;
	else return 0;
}
bool has3(int n) {
	int cnt = 0; int i = 2;
	while (n != 1) {
		if (n % i == 0) {
			cnt++;
			while (n % i == 0) n /= i;
		}
		i++;
	}
	if (cnt >= 3) return 1;
	else return 0;
}
int main() {
	int a, b; cin >> a >> b;
	bool hasNumber = 1;
	for (int i = a; i <= b; i++)
		if (has3(i) && hasReverse(i)) cout << i << " ";
	return 0;
}