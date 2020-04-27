#include<bits/stdc++.h>
using namespace std;
bool compare(int a, int b) {
	return a < b;
}
void frequencysort(int *arr, int n) {
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;
	priority_queue<pair<int, int>, compare>maxheap;
	for (auto i : mp) {
		maxheap.push({i.second, i.first});
	}
	while (!maxheap.empty()) {
		int freq = maxheap.top().first;
		int ele = maxheap.top().second;
		for (int i = 1; i <= freq; i++) {
			cout << ele << " ";
		}
		maxheap.pop();
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	frequencysort(arr, n);
}