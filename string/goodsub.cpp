/*
You are given a string  consisting of lowercase alphabets. A good subsequence of this string is a subsequence which contains distinct characters only.
Determine the number of good subsequences of the maximum possible length modulo .
*/
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main() {
	long long int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		long long int frequency[26] = {};
		long  long int ans = 1;
		for (char ch : s) {
			frequency[ch - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (!frequency[i])
				continue;
			ans *= frequency[i];
			ans %= mod;
		}
		cout << ans << endl;
	}
	return 0;

}