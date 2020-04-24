#include<bits/stdc++.h>
using namespace std;
char nextalpha(char *arr, int s, int e, char key) {
	s = 0;
	e = e - 1;
	char res = '#';
	while (s <= e) {
		int mid = s + (e - s) / 2;
		if (arr[mid] == key)
			s = mid + 1;
		else if (arr[mid] < key)
			s = mid + 1;
		else {
			res = arr[mid];
			e = mid - 1;
		}
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	char arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	char key;
	cin >> key;
	cout << nextalpha(arr, 0, n, key);
}