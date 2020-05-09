#include<bits/stdc++.h>
using namespace std;
bool checker(int *arr, int n) {
	int s = 0;
	int e = n - 1;
	while (s < e) {
		if (arr[s++] != arr[e--]) {
			return false;
		}
	}
	return true;
}
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
	(checker(arr, n)) ? cout << "true" << endl : cout << "false" << endl;
}
