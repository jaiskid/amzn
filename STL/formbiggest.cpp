#include<bits/stdc++.h>
using namespace std;
bool compartor(string x, string y) {
	string xy = x.append(y);
	string yx = y.append(x);
	return (xy > yx) ? 1 : 0;
}
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
		string arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n, compartor);
		for (int i = 0; i < n; i++) {
			cout << arr[i];
		}
		cout << endl;
	}
}
