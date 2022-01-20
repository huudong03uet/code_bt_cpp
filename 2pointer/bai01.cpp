#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	vector<int> v1(n);
	vector<int> v2(m);
	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int i = 0; i < m; i++) cin >> v2[i];
	int index1 = 0, index2 = 0;
	while (index1 < n && index2 < m) {
		if (v1[index1] >= v2[index2]) {
			cout << v2[index2] << " ";
			index2++;
		}
		else {
			cout << v1[index1] << " ";
			index1++;
		}
	}
	while (index1 < n) { cout << v1[index1] << " "; index1++; }
	while (index2 < m) { cout << v2[index2] << " "; index2++; }
	return 0;
}