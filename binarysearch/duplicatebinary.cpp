#include<bits/stdc++.h>
using namespace std;
int binaysearch_re(int *arr, int s, int e) {
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (s == e)
			return arr[s];

		if (mid % 2 == 0) {
			if (arr[mid] == arr[mid + 1])
				s = mid + 2;
			else
				e = mid;
		}
		else {
			if (arr[mid] == arr[mid - 1])
				s = mid + 1;
			else
				e = mid - 1;
		}
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << binaysearch_re(arr, 0, n - 1);
	}
}