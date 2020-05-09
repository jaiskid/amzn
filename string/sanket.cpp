#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int k;
	cin >> k;
	string s;
	cin >> s;
	int freq[2] = {};
	int count = 0;
	int left = 0;
	for (int i = 0; i < s.size(); i++) {
		freq[s[i] - 'a']++;
		if (min(freq[0], freq[1]) > k) {
			freq[s[left] - 'a']--;

		}
		else
		{
			count++;

		}
	}
	cout << count << endl;
}
