#include <iostream>
using namespace std;
bool arr[1000001];
//int main() {
//	memset(arr, 1, sizeof(arr));
//	int a, b; cin >> a >> b;
//	for (int i = 2; i <= 1000000; i++)
//		if (arr[i] == 1)
//			for (int j = i * 2; j <= 1000000; j += i) arr[j] = 0;
//
//	if (a <= 2) a = 2;
//
//	for (int i = a; i <= b; i++) {
//		bool isTrue = 1;
//		for (int j = 2; j <= b; j++)
//			if (arr[j] == 1 && i % j == 0 && i % (j * j) != 0 ) isTrue = 0;
//		if (isTrue == 1) cout << i << " ";
//	}
//	return 0;
//}
int main() {
	int a, b; cin >> a >> b;
	memset(arr, 0, sizeof(arr));
	for (int i = 2; i <= sqrt(b); i++)
		if (arr[i * i] == 0)
			for (int j = i * i; j <= b; j *= i) arr[j] = 1;
	for (int i = a; i <= b; i++)
		if (arr[i] == 1) cout << i << " ";
	return 0;
}