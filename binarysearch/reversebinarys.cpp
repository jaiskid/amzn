#include<bits/stdc++.h>
using namespace std;
int reversebin(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	while (s <= e) {
		int mid = s + (e - s ) / 2;
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
	cout << reversebin(arr, 0, n, key);
}