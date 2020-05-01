#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	string ans = "";
	ans = s;
	reverse(s.begin(), s.end());
	ans.append(s);
	cout << ans << " ";
}



