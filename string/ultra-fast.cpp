#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		int i = 0;
		while (a[i] != '\0') {
			if (a[i] == b[i]) {
				cout << "0";
			}
			else {
				cout << "1";
			}
			i++;
		}
		cout << endl;
	}
}
