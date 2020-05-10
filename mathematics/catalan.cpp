#include<bits/stdc++.h>
using namespace std;
long long int binomialCoefficent(int n, int k) {
	long long int c[k + 1];

	memset(c, 0, sizeof(c));
	c[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = min(i, k); j > 0; j--) {
			c[j] = c[j] + c[j - 1];
		}
	}
	return c[k];
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	cout << binomialCoefficent(2 * n, n) / (n + 1) << endl;
	return 0;
}
