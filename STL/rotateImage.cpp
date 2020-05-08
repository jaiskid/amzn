#include<bits/stdc++.h>
using namespace std;
const int r = 10005;
int arr[r][r];
void rotate(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n; j++) {
			swap(arr[i][j], arr[n - 1 - i][j]);
		}
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	rotate(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

