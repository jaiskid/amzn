#include<bits/stdc++.h>
using namespace std;
int primeFactor(int num, int sumDigit) {
	int sumPrime = 0;
	while (num % 2 == 0) {
		sumPrime += 2;
		num /= 2;
	}
	for (int i = 3; i <= sqrt(num); i += 2) {
		while (num % i == 0) {
			int temp = i;
			while (temp > 0) {
				sumPrime += temp % 10;
				temp /= 10;
			}
			num /= i;
		}
	}
	if (num > 2) {
		while (num > 0) {
			sumPrime += (num % 10);
			num /= 10;
		}
	}
	if (sumDigit == sumPrime)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num;
	cin >> num;
	int sum = 0;
	int num1 = num;
	while (num1 > 0) {
		sum += num1 % 10;
		num1 /= 10;
	}
	primeFactor(num, sum);
	return 0;

}

