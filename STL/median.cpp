#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < n; j++)
		cin >> b[j];
	int c[n + 1];
	int i = 0, j = 0, k = 0;
	while (i < n + 1) {
		if (a[j] <= b[k]) {
			c[i] = a[j];
			j++;
		}
		else {
			c[i] = b[k];
			k++;
		}
		i++;
	}
	for (int i = 0; i < n + 1; i++) {
		cout << c[i] << " ";
	}
	cout << (c[n] + c[n - 1]) / 2 << endl;
}
