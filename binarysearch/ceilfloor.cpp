#include<bits/stdc++.h>
using namespace std;
int ceil(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return arr[mid];
		if (arr[mid] < key)
			s = mid + 1;
		else {
			res = arr[mid];
			e = mid - 1;
		}
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
	cout << ceil(arr, 0, n, key);
}