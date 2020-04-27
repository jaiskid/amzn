#include<bits/stdc++.h>
using namespace std;
vector<int> res;
void nearlyksorted(int *arr, int n, int k) {
	priority_queue<int, vector<int>, greater<int>> minheap;
	for (int i = 0; i < n; i++) {
		minheap.push(arr[i]);
		if (minheap.size() > k) {
			res.push_back(minheap.top());
			minheap.pop();
		}
	}
	while (!minheap.empty()) {
		res.push_back(minheap.top());
		minheap.pop();
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
	nearlyksorted(arr, n, k);
	for (int i = 0; i < n; i++)
		cout << res[i] << " ";
}