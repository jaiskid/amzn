//nlogn
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	long long int x, y, z;
	priority_queue<int> maxheap;
	for (int i = 0; i < n; i++) {
		maxheap.push(arr[i]);
		if (maxheap.size() < 3) {
			cout << -1 << endl;
			continue;
		}
		x = maxheap.top();
		cout << x << " ";
		maxheap.pop();
		y = maxheap.top();
		cout << y << " ";
		maxheap.pop();
		z = maxheap.top();
		cout << z << " ";
		maxheap.pop();
		maxheap.push(x);
		maxheap.push(y);
		maxheap.push(z);
		x = x * y;
		x = x * z;
		cout << x << endl;
	}
	return 0;

}