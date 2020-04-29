#include<bits/stdc++.h>
using namespace std;
void max_heapify(int *arr, int i, int n) {
	int left = 2 * i;
	int right = 2 * i + 1;
	int largest = 0;
	if (left <= n and arr[left] > arr[i]) {
		largest = left;
	}
	else {
		largest = i;
		if (right <= n and arr[right] > arr[largest])
			largest = right;
		if (largest != i)
			swap(arr[i], arr[largest]);
		max_heapify(arr, largest, n);
	}
}
void build_maxify(int *arr, int n) {
	for (int i = n / 2; i >= 1; i--) {
		max_heapify(arr, i, n);
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	build_maxify(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}