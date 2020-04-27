#include<bits/stdc++.h>
using namespace std;
int last(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			res = mid;
			s = mid + 1;
		}
		else if (arr[mid] > key)
			e = mid - 1;
		else
			s = mid + 1;
	}
	return res;
}
int first(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int res = -1;
	while (s <= e) {
		int mid = s + e - s / 2;
		if (arr[mid] == key) {
			res = mid;
			e = mid - 1;
		}
		else if (arr[mid] < key)
			s = mid + 1;
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
	cout << first(arr, 0, n, key);
	cout << endl;
	cout << last(arr, 0, n, key);
}