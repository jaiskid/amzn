#include<bits/stdc++.h>
using namespace std;
int nearly(int *arr, int s, int e, int key) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return mid;
		if (mid - 1 >= s and arr[mid - 1] == key)
			return	mid - 1;
		if (mid - 1  <= e and arr[mid + 1] == key)
			return mid + 1;
		if (arr[mid] < key)
			s = mid + 2;
		else
			e = mid - 2;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	cout << nearly(arr, 0, n, key);
}