#include<bits/stdc++.h>
using namespace std;
char get_occurence(string str) {
	int count[256] = {};
	int max = 0;
	char ans;
	for (int i = 0; i < str.size(); i++) {
		count[str[i]]++;
		if (max < count[str[i]]) {
			max = count[str[i]];
			ans = str[i];
		}
	}
	return ans;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	cout << get_occurence(s);
}
