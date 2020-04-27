#include<bits/stdc++.h>
using namespace std;
int kcloset(int *arr, int n, int k, int x) {
	priority_queue<pair<int, int>> maxheap;
	for (int i = 0; i < n; i++) {
		maxheap.push({abs(arr[i] - x), arr[i]});
		if (maxheap.size() > k) {
			maxheap.pop();
		}
	}
	while (!maxheap.empty()) {
		cout << maxheap.top().second << " ";
		maxheap.pop();
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	int x;
	cin >> x;
	kcloset(arr, n, k, x);
}