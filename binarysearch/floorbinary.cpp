
#include<bits/stdc++.h>
using namespace std;
int binaryfloor(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return arr[mid];
		if (arr[mid] < key) {
			res = arr[mid];
			s = mid + 1;
		}
		else
			e = mid - 1;
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	cout << binaryfloor(arr, 0, n, key);
}