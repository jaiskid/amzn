#include<bits/stdc++.h>
using namespace std;
int kthlargest(int *arr, int n, int k) {
	priority_queue<int, vector<int>, greater<int>> minheap;
	for (int i = 0; i < n; i++) {
		minheap.push(arr[i]);
		if (minheap.size() > k) {
			minheap.pop();
		}
	}
	return minheap.top();
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	cout << kthlargest(arr, n, k);
}