#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int n = 1000000;
ll p[n];
void primeSieve(ll n) {
	p[0] = p[1] = 0;
	p[2] = 1;
	for (ll i = 3; i <= n; i += 2) {
		p[i] = 1;
	}
	for (ll i = 3; i <= n; i += 2) {
		if (p[i]) {
			for (ll j = i * i; j <= n; j += 2 * i) {
				p[j] = 0;
			}
		}
	}
	return;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t;
	cin >> t;
	primeSieve(10);
	for (int i = 0; i < n; i++) {
		cout << p[i] << " ";
	}
	while (t--) {
		ll a;
		cin >> a;
		ll b;
		cin >> b;

		ll count = 0;
		for (int i = a; i <= b; i++) {
			if (p[i]) {
				count++;
			}
		}
		cout << count << endl;
	}
}
