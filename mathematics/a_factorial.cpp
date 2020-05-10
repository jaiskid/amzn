#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	int n;
	int k;
	while (t--) {
		cin >> n >> k;
		int ans = INT_MAX;
		//factorialisation of k
		//p1,p2,p3,....pl
		int occ = 0;
		for (int i = 2; i * i <= k; i++) {
			if (k % i == 0) {
				occ = 0;
				while (k % i == 0) {
					occ++;
					k /= i;
				}
				//find out the power of i in n! side by side
				int cnt = 0;
				int p = i;
				while (p <= n) {
					cnt += n / p;
					p *= i;
				}
				ans = min(ans, cnt / occ);
			}
		}
		if (k > 1) {
			int cnt = 0;
			int p = k;
			while (p <= n) {
				cnt += n / p;
				p *= k;
			}
			ans = min(ans, cnt);
		}
		if (ans == INT_MAX) {
			ans = 0;
		}
		cout << ans << endl;
	}

}
