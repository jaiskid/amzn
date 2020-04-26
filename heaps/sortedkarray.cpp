#include<bits/stdc++.h>
using namespace std;
void nearlyksorted(int *arr, int n, int k) {
	priority_queue<int, vector<int>, greater<int>> minheap(arr, arr + k + 1);
	int index = 0;
	for (int i = 0; i < n; i++) {
		arr[index++] = minheap.top();
		minheap.pop();
		minheap.push(arr[i]);
	}
	while (!minheap.empty()) {
		arr[index++] = minheap.top();
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
		cout << arr[i] << " ";
}