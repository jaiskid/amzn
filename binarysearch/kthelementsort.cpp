#include<bits/stdc++.h>
using namespace std;
int main() {
	int m;
	cin >> m;
	int n;
	cin >> n;
	int a[n];
	int b[n];
	int c[n + 1];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int d;
	cin >> d;
	int sorted[m + n];
	int i = 0, j = 0, k = 0;
	while (i < m and j < n) {
		if (a[i] < b[j]) {
			sorted[k++] = a[i++];
		}
		else
			sorted[k++] = b[j++];
	}
	while (i < m) {
		sorted[k++] = a[i++];
	}
	while (j < n) {
		sorted[k++] = b[j++];
	}
	cout << sorted[d - 1] << endl;
}