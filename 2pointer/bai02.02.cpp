#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	vector<int> v1(n);
	vector<int> v2(m);
	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int j = 0; j < m; j++) cin >> v2[j];
	int index1 = 0, index2 = 0;
	while (index1 < n && index2 < m) {
		if (v1[index1] < v2[index2]) index1++;
		else {
			cout << index1 << " ";
			index2++;
		}
	}
	while (index2 < m) {
		cout << index1 << " "; index2++;
	}
	return 0;
}