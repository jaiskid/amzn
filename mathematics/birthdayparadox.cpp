#include<bits/stdc++.h>
using namespace std;
int find(double p) {
	if (p == 1) {
		return 366;
	}
	return ceil(sqrt(2 * 365 * log(1 / (1 - p))));
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double p;
	cin >> p;
	cout << find(p);
}
