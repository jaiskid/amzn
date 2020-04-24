#include<bits/stdc++.h>
using namespace std;
pair<int.int> p;
pair<int, int> binaryfloorceil(int *arr, int s, int e, int key) {
	s = 0;
	e = e - 1;
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			return p.first = arr[mid];
		if (arr[mid] < key)
		{
			p.first = arr[mid];
			s = mid + 1;
		}
		else {
			p.second = arr[mid];
			e = mid - 1;
		}
	}
	return p;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int key;
	cin >> key;
	binaryfloorceil(arr, 0, n, key);
}