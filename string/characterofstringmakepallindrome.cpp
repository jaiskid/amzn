#include<bits/stdc++.h>
using namespace std;
bool canformpalindrom(string s) {
	int freq[256] = {};
	for (int i = 0; i < s.size(); i++) {
		freq[s[i]]++;
	}
	int odd = 0;
	for (int i = 0; i < 256; i++) {
		if (freq[i] & 1)
			odd++;
		if (odd > 1)
			return false;
	}
	return true;
}
int main() {
	string s;
	cin >> s;
	cout << canformpalindrom(s);
}