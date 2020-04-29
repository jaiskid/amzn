#include<bits/stdc++.h>
using namespace std;
int main() {
	priority_queue<int> maxheap;
	int q, k;
	cin >> q >> k;
	while (q--) {
		int type;
		cin >> type;
		if (type == 1) {
			int x;
			int y;
			cin >> x >> y;
			int distance = x * x + y * y;
			maxheap.push(distance);
		}
		else {
			while (maxheap.size() > k) {
				maxheap.pop();
			}
			cout << maxheap.top() << "\n";
		}

	}
}