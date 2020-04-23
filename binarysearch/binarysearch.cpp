#include<bits/stdc++.h>
using namespace std;
int binary(int *arr, int key, int s, int e) {
	s = 0;
	e = e - 1;
	while (s <= e) {
		int mid =  s + e - s / 2;
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int key;
	cin >> key;
	cout << binary(arr, key, 0, n);
}