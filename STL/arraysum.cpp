#include<bits/stdc++.h>
using namespace std;
void calSum(int *a, int *b, int n, int m) {
	int sum[n];
	int i = n - 1, j = m - 1, k = n - 1;
	int carry = 0;
	int s = 0;
	while (j >= 0) {
		s = a[i] + b[j] + carry;
		sum[k] = (s % 10);
		carry = s / 10;
		k--;
		i--;
		j--;
	}
	while (i >= 0) {
		s = a[i] + carry;
		sum[k] = (s % 10);
		i--;
		k--;
	}
	if (carry)
		cout << carry << ", ";
	for (int i = 0; i < n; i++)
		cout << sum[i] << ", ";
}
void compare(int *a, int *b, int n, int m) {
	if (n >= m)
		calSum(a, b, n, m);
	else
		calSum(b, a, m, n);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	compare(a, b, n, m);
	cout << "END";
}
