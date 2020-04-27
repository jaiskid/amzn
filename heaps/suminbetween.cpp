#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int *arr, int n, int k) {
	priority_queue<int> maxheap;
	for (int i = 0; i < n; i++) {
		maxheap.push(arr[i]);
		if (maxheap.size() > k) {
			maxheap.pop();
		}
	}
	return maxheap.top();
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k1, k2;
	cin >> k1 >> k2;
	int first = kthsmallest(arr, n, k1);
	int second = kthsmallest(arr, n, k2);
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] > first and arr[i] < second) {
			sum += arr[i];
		}
	cout << sum << endl;
}