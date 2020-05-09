//good subarray
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int n = 1000005;
ll a[n], pre[n];
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		memset(pre, 0, sizeof(pre));
		pre[0] = 1;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
			sum %= n;
			sum = (sum + n) % n;
			pre[sum]++;
		}
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			int m = pre[i];
			ans += (m) * (m - 1) / 2;
		}
		cout << ans << endl;
	}


}
