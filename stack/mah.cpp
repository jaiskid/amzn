#include<bits/stdc++.h>
using namespace std;
vector<long long int>nsl(long long int *arr, long long int n) {
	stack<pair<long long int, long long int>> s;
	vector<long long int> v;
	for (long long int i = 0; i < n; i++) {
		if (s.size() == 0)
			v.push_back(-1);
		else if (s.size() > 0 and s.top().first < arr[i]) {
			v.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first >= arr[i]) {
			while (s.size() > 0 and s.top().first >= arr[i]) {
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
vector<long long int>nsr(long long int *arr, long long int n) {
	stack<pair<long long int, long long int>> s;
	vector<long long int> v;
	for (long long int i = n - 1; i >= 0; i--) {
		if (s.size() == 0)
			v.push_back(n);
		else if (s.size() > 0 and s.top().first < arr[i]) {
			v.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first >= arr[i]) {
			while (s.size() > 0 and s.top().first >= arr[i]) {
				s.pop();
			}
			if (s.size() == 0) {
				v.push_back(n);
			}
			else {
				v.push_back(s.top().second);
			}
		}
		s.push({arr[i], i});
	}
	reverse(v.begin(), v.end());
	return v;
}
int main() {
	long long int n;
	cin >> n;
	long long int arr[n];
	for (long long int i = 0; i < n; i++)
		cin >> arr[i];
	vector<long long int> left = nsl(arr, n);
	vector<long long int> right = nsr(arr, n);
	for (long long int i = 0; i < n; i++) {
		cout << left[i] << " ";
	}
	cout << endl;
	for (long long int i = 0; i < n; i++) {
		cout << right[i] << " ";
	}
	vector<long int>width;
	width.resize(n);
	for (long long int i = 0; i < n; i++) {
		width[i] = right[i] - left[i] - 1;
	}
	cout << endl;
	for (long long int i = 0; i < n; i++) {
		cout << width[i] << " ";
	}
	vector<long long int> area;
	area.resize(n);
	for (long long int i = 0; i < n; i++) {
		area[i] = width[i] * arr[i];
	}
	cout << endl;
	for (long long int i = 0; i < n; i++) {
		cout << area[i] << " ";
	}
	cout << *max_element(area.begin(), area.end());
}