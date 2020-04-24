#include<bits/stdc++.h>
using namespace std;
int findpeak(int *arr, int s, int n) {
	int low = s;
	int high = n - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if ((mid == 0 || arr[mid - 1] <= arr[mid]) and (mid == n - 1 || arr[mid + 1] < arr[mid]))
			return mid;
		else if (mid > 0 and arr[mid - 1] > arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}
int binarysearch(int *arr, int s, int e, int key) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}
	return -1;
}
int decbinary(int *arr, int s, int e, int key) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return mid;
		if (arr[mid] < key)
			e = mid - 1;
		else
			s = mid + 1;
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
	int index = findpeak(arr, 0, n);
	cout << index << " ";
	int ans1 = binarysearch(arr, 0, index - 1, key);
	int ans2 = decbinary(arr, index, n - 1, key);
	if (ans2 != -1 and ans1 == -1)
		cout << ans2 << " ";
	else if (ans1 != -1 and ans2 == -1)
		cout << ans1 << " ";
	else
		cout << -1 << " ";
}