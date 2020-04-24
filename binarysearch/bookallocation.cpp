#include<bits/stdc++.h>
using namespace std;
bool isvalid(int *arr, int n, int k, int maxNOpages) {
	int student = 1;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		if (sum > maxNOpages) {
			student++;
			sum = arr[i];
		}
		if (student > k)
			return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	if (n < k) {
		cout << -1 << " ";
		return 0;
	}
	int max = arr[0];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (max <= arr[i])
			max = arr[i];
		sum += arr[i];
	}
	int low = max;
	int high = sum;
	int res = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (isvalid(arr, n, k, mid)) {
			res = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	(res == -1) ? cout << -1 : cout << res;

}