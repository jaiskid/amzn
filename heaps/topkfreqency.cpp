#include<bits/stdc++.h>
using namespace std;
#define p pair<int,int>
priority_queue<p, vector<p>, greater<p>> minheap;
void topkfrequency(int *arr, int n, int k) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;
	for (auto i : mp) {
		minheap.push({i.second, i.first});
		if (minheap.size() > k)
			minheap.pop();
	}
	while (minheap.size() > 0) {
		cout << minheap.top().first << " ";
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
	topkfrequency(arr, n, k);
}