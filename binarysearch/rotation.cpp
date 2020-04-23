#include<bits/stdc++.h>
using namespace std;
int rotatedtime(int *arr, int n) {
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
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << rotatedtime(arr, n);

}