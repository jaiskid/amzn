#include<bits/stdc++.h>
using namespace std;
int binarymin(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return arr[mid];
		else if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;
	}
	int low = abs(arr[s] - key);
	int high = abs(arr[e] - key);
	if (low < high) {
		return arr[s];
	}
	else {
		return arr[e];
	}
}
int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	cout << binarymin(arr, 0, n - 1, key);
}