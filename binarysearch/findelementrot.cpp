#include<bits/stdc++.h>
using namespace std;
int searchinr(int *arr, int n) {
	int s = 0;
	int e = n - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		int next = (mid + 1) % n;
		int prev = (mid - 1 + n) % n;
		if (arr[mid] <= arr[next] and arr[mid] <= arr[prev])
			return mid;

		else if (arr[mid] <= arr[e])
			e = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}
int binarysearch(int *arr, int s, int e, int key) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key) {
			return mid;
		}
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
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	int index = searchinr(arr, n);
	int ans1 = binarysearch(arr, 0, index - 1, key);
	int ans2 = binarysearch(arr, index, n - 1, key);
	if (ans1 != -1 and ans2 == -1)
		cout << ans1 << " ";
	else if (ans2 != -1 and ans1 == -1) {
		cout << ans2 << " ";
	}
	else
		cout << -1 << " ";

}