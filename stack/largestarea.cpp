#include<bits/stdc++.h>
using namespace std;
vector<int>nsr(vector<int>&v, int n) {
	vector<int> res;
	stack<pair<int, int>> s;
	for (int i = n - 1; i >= 0; i--) {
		if (s.size() == 0) {
			res.push_back(n);//pseudo index
		}
		else if (s.size() > 0 and s.top().first < v[i]) {
			res.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first >= v[i]) {
			while (s.size() > 0 and s.top().first >= v[i]) {
				s.pop();
			}
			if (s.size() == 0) {
				res.push_back(n);
			}
			else {
				res.push_back(s.top().second);
			}
		}
		s.push({v[i], i});
	}
	reverse(res.begin(), res.end());
	return res;
}
vector<int>nsl(vector<int>&v, int n) {
	vector<int> res;
	stack<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		if (s.size() == 0) {
			res.push_back(-1);
		}
		else if (s.size() > 0 and s.top().first < v[i]) {
			res.push_back(s.top().second);
		}
		else if (s.size() > 0 and s.top().first >= v[i]) {
			while (s.size() > 0 and s.top().first >= v[i]) {
				s.pop();
			}
			if (s.size() == 0) {
				res.push_back(-1);
			}
			else {
				res.push_back(s.top().second);
			}
		}
		s.push({v[i], i});
	}
	return res;
}
int mah(vector<int>&v) {
	vector<int>left = nsl(v, v.size());
	vector<int>right = nsr(v, v.size());
	vector<int> width;
	width.resize(v.size());
	for (int i = 0; i < v.size(); i++) {
		width[i] = right[i] - left[i] - 1;
	}
	vector<int> area;
	area.resize(v.size());
	for (int i = 0; i < v.size(); i++) {
		area[i] = width[i] * v[i];
	}
	return *max_element(area.begin(), area.end());
}
int main() {
	int n;
	cin >> n;
	int m;
	cin >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	vector<int> v;
	v.resize(n);
	int mx = 0;
	mx = mah(v);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				v[j] = 0;
			}
			else
				v[j] = v[j] + arr[i][j];
		}
		mx = max(mx, mah(v));
	}
	cout << mx;
}