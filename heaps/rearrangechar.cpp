#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
struct key {
	int freq;
	char ch;
	bool operator<(const key &k) const {
		return freq < k.freq;
	}
};
void rearrangeString(string s) {
	int n = s.size();
	int count[MAX_CHAR] = {0};
	for (int i = 0; i < n; i++)
		count[s[i] - 'a']++;
	//Insert all characters with their frequencies
	//into a priority_queue
	priority_queue<key> maxheap;
	for (char c = 'a'; c <= 'z'; c++) {
		if (count[c - 'a']) {
			maxheap.push({count[c - 'a'], c});
		}
	}
	s = "";
	//work as the previous visited element initial # and -1
	key prev { -1, '#'};
	while (!maxheap.empty()) {
		//pop top element from queue and add it
		key k = maxheap.top();
		maxheap.pop();
		s += k.ch;
		if (prev.freq > 0)
			maxheap.push(prev);
		(k.freq)--;
		prev = k;
	}
	if (n != s.size())
		cout << "Not valid string" << endl;
	else
		cout << s << endl;
}
int main() {
	string s;
	cin >> s;
	rearrangeString(s);
}