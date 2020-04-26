#include<bits/stdc++.h>
using namespace std;
//nlogk
void kcloset(int *arr, int k, int x, int n) {
	priority_queue<pair<int, int>> maxheap;
	//store k element
	for (int i = 0; i < k; i++) {
		maxheap.push({abs(arr[i] - x), i});
	}
	for (int i = k; i < n; i++) {
		int diff = abs(arr[i] - x);
		if (diff > maxheap.top().first)
			continue;
		maxheap.pop();
		maxheap.push({diff, i});
	}
	while (!maxheap.empty()) {
		cout << arr[maxheap.top().second] << " ";
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
	kcloset(arr, k, x, n);

}