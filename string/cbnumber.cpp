#include<bits/stdc++.h>
using namespace std;
long stoint(string s)
{
	long i, j = 0;
	i = 0;
	while (s[j] >= '0' && s[j] <= '9')
	{
		i = i * 10 + (s[j] - '0');
		j++;
	}
	return i;
}
bool valid(bool *visited, long long start, long long end) {
	for (int i = start; i < end; i++) {
		if (visited[i]) {
			return false;
		}
	}
	return true;
}
bool isCbNo(long long int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	long int arr[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	long int k = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < k; i++) {
		if (n == arr[i]) {
			return true;
		}
	}
	for (int i = 0; i < k; i++) {
		if (n % arr[i] == 0)
			return false;
	}
	return true;

}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s;
	cin >> s;
	long int count = 0;
	bool *visited = new bool[n];
	for (int len = 1; len <= n; len++) {
		for (int si = 0; si <= n - len; si++) {
			int ei = si + len;
			string ss = s.substr(si, ei - si);
			if (isCbNo(stoint(ss)) and valid(visited, si, ei)) {
				count++;
				for (int i = si; i < ei; i++) {
					visited[i] = true;
				}
			}
		}
	}
	cout << count;
}
