#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main() {
	int n_test; cin >> n_test;
	while (n_test--) {
		string s; cin >> s;
		int arr[10] = { 0 };
		for (int i = 0; i < s.length(); i++)
			arr[s[i] - '0']++;
		
		int oddMax = 0; int numberOddMax = 0; bool hasOdd = 0, hasEven = 0;
		for (int i = 0; i <= 9; i++) 
			if (arr[i] % 2 == 0 && arr[i] != 0 && i != 0) hasEven = 1;
		if (hasEven == 0) arr[0] = 0;

		for (int i = 0; i <= 9; i++)
			if (arr[i] % 2 == 1 && oddMax <= arr[i]) {
				oddMax = arr[i];
				numberOddMax = i;
			}
		
		string temp = "";
		for (int i = 9; i >= 0; i--) {
			if (arr[i] % 2 == 0) temp += string(arr[i] / 2, char(i + '0'));
		}
		
		temp += string(arr[numberOddMax] / 2, char(numberOddMax+ '0'));
		cout << temp; cout << numberOddMax;
		reverse(temp.begin(), temp.end()); cout << temp;
		cout << endl;			
	}
	return 0;
}