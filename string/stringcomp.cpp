#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char str[100];
	cin >> str;
	int i;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		int count = 1;
		while (str[i] == str[i + 1] and i < len - 1) {
			i++;
			count++;
		}
		cout << str[i] << count;
	}
}
