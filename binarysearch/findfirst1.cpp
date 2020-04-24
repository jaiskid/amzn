#include<bits/stdc++.h>
using namespace std;
int firstoccurne(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid]	== key) {
			ans = mid;
			s = mid - 1;
		}
		if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;

	}
	return ans;
}
int main() {
	int arr[] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
	int low = 0;
	int high = 1;
	int key;
	cin >> key;
	while (key > arr[high]) {
		low = high;
		high = high * 2;
	}
	cout << firstoccurne(arr, low, high, key);
}