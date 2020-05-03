#include<bits/stdc++.h>
using namespace std;
int minsum(int *arr, int n) {
	sort(arr, arr + n);
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1)
			a = a * 10 + arr[i];
		else
			b = b * 10 + arr[i];
	}
	return a + b;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << minsum(arr, n) << endl;
	}
}