#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, i, j, l2, m, q = 0, p1, p2, f = 0, c = 0, h = 10005;
	cin >> t;
	while (t--)
	{	f = 0, c = 0, h = 10005;
		cin >> s1 >> s2;

		for (i = 0; i < s1.length(); i++)
		{	if (s1[i] == s2[0])
			{	int k = 0;
				for (j = i; j < s1.length(); j++)
				{	if (k == s2.length())
						break;
					if (s1[j] == s2[k])
					{k++;}
				}

				if (k == s2.length())
				{ h = min(h, j - i);}

			}
		}
		if (h == 10005)
		{cout << "NO" << "\n";}
		else
		{cout << "YES" << " " << h - s2.length() << "\n";}

	}
}