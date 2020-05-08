#include<bits/stdc++.h>
using namespace std;
const int n = 10005;
int mat[n][n];
bool searchMatrix(int target, int r, int c) {
	if (r == 0) {
		return false;
	}
	if (c == 0) {
		return false;
	}
	int i = 0, j = c - 1;
	while (i<r and j >= 0 ) {
		if (mat[i][j] == target) {
			return true;
		}
		else if (mat[i][j] > target) {
			--j;
		}
		else {
			++i;
		}
	}
	return false;
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
			cin >> mat[i][j];
		}
	}
	int target;
	cin >> target;
	cout << searchMatrix(target, r, c);
}
