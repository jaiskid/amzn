#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int maxL[n];
	int maxR[n];
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	maxL[0] = arr[0];
	for (int i = 1; i < n; i++) {
		maxL[i] = max(maxL[i - 1], arr[i]);
	}
	maxR[n - 1] = arr[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		maxR[i] = max(maxR[i + 1], arr[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << maxL[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << maxR[i] << " ";
	}
	int water[n];
	for (int i = 0; i < n; i++) {
		water[i] = min(maxL[i], maxR[i]) - arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << water[i] << " ";
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += water[i];
	}
	cout << endl;
	cout << sum;
}