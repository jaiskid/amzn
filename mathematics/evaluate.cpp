#include<bits/stdc++.h>
#include <cpp_int.hpp>
using namespace std;
cpp_int function(cpp_int x) {
	retun (3 * (x * x) - x + 10) + (4 * (x * x * x) + 2 * (x * x) - 5 * (x) + 4);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cpp_int x;
	cin >> x;
	cpp_int funct = function(x);
	cout << funct << " ";
}
