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
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int cs = arr[0];
		int ms = arr[0];
		for (int i = 1; i < n; i++) {
			cs = max(arr[i], cs + arr[i]);
			ms = max(cs, ms);

		}
		cout << ms << endl;
	}

}
