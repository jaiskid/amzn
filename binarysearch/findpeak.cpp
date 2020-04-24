#include<bits/stdc++.h>
using namespace std;
int peak(int *arr, int s, int e) {
	s = 0;
	e = e - 1;
	int ans = -1;
	while (s <= e) {
		int mid = s + (e - s) / 2;

		if ((mid == 0 || arr[mid - 1] <= arr[mid]) and (arr[mid + 1] <= arr[mid] || mid == e - 1))
			return mid;
		else if (mid > 0 && arr[mid - 1] > arr[mid])
			e = mid - 1;
		else
			s = mid + 1;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << peak(arr, 0, n);
}