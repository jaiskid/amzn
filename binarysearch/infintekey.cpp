#include<bits/stdc++.h>
using namespace std;
int binarysearch(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
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
int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int low = 0;
	int high = 1;
	int key;
	
	cin >> key;
	while (key > arr[high]) {
		low = high;
		high = high * 2;
	}
	cout << binarysearch(arr, low, high, key);
}