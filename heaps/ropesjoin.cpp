#include<bits/stdc++.h>
using namespace std;
int ropesjoincost(int *arr, int n) {
	priority_queue<int, vector<int>, greater<int>> minheap;
	for (int i = 0; i < n; i++)
		minheap.push(arr[i]);
	int cost = 0;
	while (minheap.size() >= 2) {
		int first = minheap.top();
		minheap.pop();
		int second = minheap.top();
		minheap.pop();
		cost = cost + first + second;
		minheap.push(first + second);
	}
	// while (!minheap.empty()) {
	// 	cout << minheap.top() << endl;
	// 	minheap.pop();
	// }
	return cost;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << ropesjoincost(arr, n);
}