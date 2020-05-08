#include<bits/stdc++.h>
using namespace std;
const int Max = 10005;
int arr[Max][Max];
void sprial(int r, int c) {
	int sr = 0, er = r - 1, sc = 0, ec = c - 1;
	while (sr <= er and sc <= ec) {
		for (int i = sr; i <= er; i++) {
			cout << arr[i][sc] << ", ";
		}
		sc++;
		for (int j = sc; j <= ec; j++) {
			cout << arr[er][j] << ", ";
		}
		er--;
		for (int i = er; i >= sr; i--) {
			cout << arr[i][ec] << ", ";
		}
		ec--;
		for (int j = ec; j >= sc; j--) {
			cout << arr[sr][j] << ", ";
		}
		sr++;
	}
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int r, c;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> arr[i][j];
		}
	}
	sprial(r, c);
	cout << "END";
}
