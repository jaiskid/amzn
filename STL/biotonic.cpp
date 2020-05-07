#include<bits/stdc++.h>
using namespace std;
int biotonic_array(int *arr	, int n) {
	int inc[n] = {};
	int dec[n] = {};
	int maximum;
	inc[0] = 1;
	dec[n - 1] = 1;
	for (int i = 1; i < n; i++) {
		inc[i] = (arr[i] >= arr[i - 1]) ? inc[i - 1] + 1 : 1;
	}
	for (int i = n - 2; i >= 0; i--) {
		dec[i] = (arr[i] >= arr[i + 1]) ? dec[i + 1] + 1 : 1;
	}
	maximum = inc[0] + dec[0] - 1;
	for (int i = 1; i < n; i++) {
		maximum = max(maximum, inc[i] + dec[i] - 1);
	}
	return maximum;
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
		cout << biotonic_array(arr, n) << endl;
	}
}
