#include<bits/stdc++.h>
using namespace std;
long long int  power(long long int  a, long long int  n, long long int  p) {
	long long int  ans = 1;
	while (n != 0) {
		if (n & 1) {
			ans = ((ans % p) * (a % p)) % p;
		}
		a = ((a % p) * (a % p)) % p;
		n >>= 1;
	}
	return ans;
}
long long int  main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int  t;
	cin >> t;
	while (t--) {
		long long int  a, n, p;
		cin >> a >> n >> p;
		for (long long int  i = 1; i <= n; i++) {
			long long int  y = power(a, i, p);
			a = y;
		}
		cout << a << endl;
	}
}
