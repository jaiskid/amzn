#include<bits/stdc++.h>
using namespace std;
const int limit	=	64 * 2 + 10;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;

	unsigned long long a[limit];

	cin >> n;

	if (n >= limit) {

		puts("Yes");

		return 0;

	}

	for (int i = 0; i < n; ++i)

		cin >> a[i];

	for (int i = 0; i < n; ++i)

		for (int j = i + 1; j < n; ++j)

			for (int k = j + 1; k < n; ++k)

				for (int l = k + 1; l < n; ++l)

					if ((a[i]^a[j]^a[k]^a[l]) == 0) {

						puts("Yes");

						return 0;

					}

	puts("No");

}
