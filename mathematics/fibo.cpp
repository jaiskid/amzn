#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int
ll fib(ll n) {
	double phi = (1 + sqrt(5)) / 2;
	return round(pow(phi, n) / sqrt(5));
}
int main ()
{
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << fib(n) % mod << endl;
	}

	return 0;
}