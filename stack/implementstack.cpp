#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> ss;
void push_(int a) {
	s.push_(a);
	if (ss.size() == 0 || a <= ss.top()) {
		ss.push_(a);
		return;
	}
}
int pop_() {
	if (s.size() == 0)
		return -1;
	int ans = s.top();
	if (ss.top() == ans) {
		ss.pop();
	}
	return ans;
}
int getmin() {
	if (ss.size() == 0)
		return -1;
	return ss.top();
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		s.push_(arr[i]);
	}
	cout << pop_();
	cout << endl;
	cout << getmin();
}