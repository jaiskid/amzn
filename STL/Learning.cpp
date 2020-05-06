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
	int key;
	cin >> key;
	auto it = find(arr, arr + n, key);
	cout << it - arr << endl;
	auto lb = lower_bound(arr, arr + n, key);
	cout << lb - arr << endl;
	auto ub = upper_bound(arr, arr + n, key);
	cout << ub - arr << "\n";
	bool present = binary_search(arr, arr + n, key);
	cout << present << "\n";
	cout << endl;
	vector<int> v{1, 1, 3};
	do {
		for (int x : v) {
			cout << x << " ";
		}
		cout << endl;
	}
	while (next_permutation(v.begin(), v.end()));
	//next_permutation(v.begin(), v.end());

	cout << endl;
	for (int x : v) {
		cout << x << " ";
	}


}
