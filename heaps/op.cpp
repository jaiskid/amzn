//nlogn
#include<bits/stdc++.h>
using namespace std;
int main() {
	priority_queue<int>maxheap;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		maxheap.push(arr[i]);
	int q;
	cin >> q;
	while (q--) {
		int type;
		cin >> type;
		if (type == 1) {
			int x;
			cin >> x;
			maxheap.push(x);
		}
		else {
			cout << maxheap.top() << endl;
		}
	}
}