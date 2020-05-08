#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int i = 1;
	int val[s.length() + 1];
	cout << s[0];
	while (s[i] != '\0') {
		val[i] = int(s[i]) - int(s[i - 1]);
		cout << val[i] << s[i];
		i++;
	}
}
