#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxL[n];
	int maxR[n];
	maxL[0] = arr[0];
	for (int i = 1; i < n; i++) {
		maxL[i] = max(maxL[i - 1], arr[i]);
	}
	maxR[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		maxR[i] = max(maxR[i + 1], arr[i]);
	}
	int water[n];
	for (int i = 0; i < n; i++) {
		water[i] = min(maxR[i], maxL[i]) - arr[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += water[i];
	}
	cout << sum << endl;
}
