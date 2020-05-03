#include<bits/stdc++.h>
using namespace std;
long long int ropesjoincost(long long int *arr, long long int n) {
	priority_queue<long long int, vector<long long int>, greater<long long int>> minheap;
	for (long long int i = 0; i < n; i++)
		minheap.push(arr[i]);
	long long int cost = 0;
	while (minheap.size() >= 2) {
		long long int first = minheap.top();
		minheap.pop();
		long long int second = minheap.top();
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
	long long int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		long long int arr[n];
		for (long long int i = 0; i < n; i++)
			cin >> arr[i];
		cout << ropesjoincost(arr, n) << endl;
	}

}