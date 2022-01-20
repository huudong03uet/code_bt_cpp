#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m; cin >> n >> m;
	vector<int> v1(n);
	vector<int> v2(m);
	for (int i = 0; i < n; i++) cin >> v1[i];
	for (int i = 0; i < m; i++) cin >> v2[i];
	int index1 = 0, index2 = 0, cnt = 0;
	while(index2 < v2.size()) {
		while(index1 < v1.size()) {
			if (v1[index1] >= v2[index2]) { 
				cout << index1 << " "; cnt++;
				break; 
			}
			else index1++;
		}
		index2++;
	}
	while (cnt < v2.size()) { cout << index1 << " "; cnt++; }
	return 0;
}