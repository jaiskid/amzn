//klogk
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
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int q;
	cin >> q;
	while (q--) {
		int k;
		cin >> k;
		char ch;
		cin >> ch;
		if (ch == 'S')
			cout << kthsmallest(arr, n, k) << endl;
		else
			cout << kthlargest(arr, n, k) << endl;
	}

}