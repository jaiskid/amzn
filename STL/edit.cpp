#include<bits/stdc++.h>
using namespace std;
int editdistance(string s, string r, int n, int m) {
	int t[n][m];
	for (int i = 0; i <n+1; i++) {
		for (int j = 0; j <m+1; j++) {
			if (i == 0) {
				t[i][j] = j;
			}
			else if (j == 0) {
				t[i][j] = i;
			}
			else if (s[i - 1] == r[j - 1]) {
				t[i][j] = t[i - 1][j - 1];
			}
			else {
				t[i][j] = 1 + min(t[i-1][j], min(t[i - 1][j - 1], t[i][j-1]));
			}
		}
		
	}
	return t[n][m];
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	string r;
	cin >> r;
	int n = s.size();
	int m = r.size();
	cout << editdistance(s, r, n, m);
}


