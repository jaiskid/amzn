#include<bits/stdc++.h>
using namespace std;
int firstocc(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			ans = mid;
			e = mid - 1;
		}
		else if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}

	return ans;
}
int lastocc(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + e - s / 2;
		if (arr[mid] == key) {
			ans = mid;
			s = mid + 1;
		}
		else if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}

	return ans;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	int first = firstocc(arr, 0, n, key);
	int last = lastocc(arr, 0, n, key);
	cout << last - first + 1;
}