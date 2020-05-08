#include<bits/stdc++.h>
using namespace std;
int kadane(int *arr, int n) {
	int ms = arr[0];
	int cs = arr[0];
	for (int i = 1; i < n; i++) {
		cs = max(cs + arr[i], arr[i]);
		ms = max(cs, ms);
	}
	return ms;
}
int max_circular(int *arr, int n) {
	int max_kadane = kadane(arr,n);
	int wrap = 0;
	for (int i = 0; i < n; i++) {
		wrap += arr[i];
		arr[i] = -arr[i];
	}
	wrap += kadane(arr, n);
	return (wrap > max_kadane) ? wrap : max_kadane;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cout << max_circular(arr, n) << endl;
	}
}
