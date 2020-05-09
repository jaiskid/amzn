#include<bits/stdc++.h>
using namespace std;
int power(int a, int b) {
	if (b == 0)
		return 1;
	int smallerpower = power(a, b / 2);
	smallerpower *= smallerpower;
	if (b & 1) {
		return a * smallerpower;

	}
	else {
		return smallerpower;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b;
	cin >> a >> b;
	cout << power(a, b);
}
