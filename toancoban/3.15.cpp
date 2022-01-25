#include <iostream>
using namespace std;
int main() {
	int s; cin >> s;
	int cntOdd = 0, cntEven = 0;
	while (s) {
		int temp = s % 10;
		if (temp % 2 == 0) cntEven++;
		else cntOdd++;
		s /= 10;
	}
	cout << cntOdd << " " << cntEven << endl;
	return 0;
}