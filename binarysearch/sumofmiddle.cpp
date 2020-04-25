#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	int i = 0, j = 0, k = 0;
	int c[n + 1];
	while (i < n + 1) {
		if (a[j] <= b[k]) {
			c[i] = a[j];
			j++;
		}
		else {
			c[i] = b[k];
			k++;
		}
		i++;
	}
	cout << c[n - 1] + c[n] << endl;
}