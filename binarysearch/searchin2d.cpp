#include<bits/stdc++.h>
using namespace std;
bool binaryse2d(int arr[4][4], int m, int n, int key) {
	int i = 0;
	int j = n - 1;
	while (i < m and j >= 0) {
		if (arr[i][j] == key) {
			return true;
		}
		else if (arr[i][j] > key) {
			j--;
		}
		else {
			i++;
		}

	}
	return false;
}
int main() {
	int mat[4][4] = { { 10, 20, 30, 40 },
		{ 15, 25, 35, 45 },
		{ 27, 29, 37, 48 },
		{ 32, 33, 39, 50 }
	};
	int key;
	cin >> key;
	cout << binaryse2d(mat, 4, 4, key);
}