#include<bits/stdc++.h>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int target;
	cin >> target;
	sort(arr, arr + n);
	int s = 0;
	int e = n - 1;
	while (s < e) {
		if (arr[s] + arr[e] == target) {
			cout << arr[s] << " and " << arr[e] << endl;
			s++;
			e--;
		}
		else if (arr[s] + arr[e] < target) {
			s++;
		}
		else
			e--;
	}

}

