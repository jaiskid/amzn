#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k;
	cin >> k;
	//the length of maximum substring of equal character
	string s;
	cin >> s;
	int freq[256] = {0};
	int ans = 0, left = 0;
	for (int i = 0; i < s.size(); i++) {
		freq[s[i]-'a']++;
		if (min(freq[0], freq[1]) > k) {
			freq[s[left]-'a']--;
			left++;
		}
		else {
			ans++;
		}
	}
	cout << ans << endl;
}
