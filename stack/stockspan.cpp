#include<bits/stdc++.h>
using namespace std;
vector<int> stockspan(int *arr, int n) {
	stack<pair<int, int>> s;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (s.size() == 0)
			v.push_back(-1);
		else if (s.size() > 0 and s.top().first > arr[i]) {
			v.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first <= arr[i]) {
			while (s.size() > 0 and s.top().first <= arr[i]) {
				s.pop();
			}
			if (s.size() == 0) {
				v.push_back(-1);
			}
			else {
				v.push_back(s.top().second);
			}
		}
		s.push({arr[i], i});
	}
	return v;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> v = stockspan(arr, n);
	for (int i = 0; i < n; i++) {
		cout << i - v[i] << " ";
	}
}