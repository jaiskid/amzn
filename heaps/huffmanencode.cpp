#include<bits/stdc++.h>
using namespace std;
map<char, int> freq;
map<char, string>codes;
struct MinheapNode {
	char data;
	int freq;
	MinheapNode *left;
	MinheapNode *right;
	MinheapNode(char d, int f) {
		data = d;
		freq = f;
		left = right = NULL;
	}
};
struct compare {
	bool operator()(MinheapNode* l, MinheapNode* r) {
		return l->freq > r->freq;
	}
};
void printCodes(struct MinheapNode *root , string str) {
	if (!root)
		return;
	if (root->data == '$')
		cout << root->data << ":" << str << endl;
	printCodes(root->left, str + "0");
	printCodes(root->right, str + "1");
}
void encode( struct MinheapNode* root , string str) {
	if (!root)
		return;
	if (root->data != '$')
		codes[root->data] = str;
	encode(root->left, str + "0");
	encode(root->right, str + "1");
}
priority_queue<MinheapNode*, vector<MinheapNode*>, compare> minheap;
void huffmanCodes(int size) {
	struct MinheapNode *left, *right, *top;
	for (auto v : freq) {
		minheap.push(new MinheapNode(v.first, v.second));
	}
	while (minheap.size() != 1) {
		left = minheap.top();
		minheap.pop();
		right = minheap.top();
		minheap.pop();
		top = new MinheapNode('$', left->freq + right->freq);
		top->left = left;
		top->right = right;
		minheap.push(top);
	}
	encode(minheap.top(), "");
}
void calfreq(string str) {
	for (int i = 0; i < str.size(); i++) {
		freq[str[i]]++;
	}
}
string decode(struct MinheapNode *root, string s) {
	string ans = "";
	struct MinheapNode* curr = root;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0')
			curr = curr->left;
		else
			curr = curr->right;
		if (curr->left == NULL and curr->right == NULL) {

			ans += curr->data;
			curr = root;
		}

	}
	return ans + '\0';
}
int main() {
	string s;
	cin >> s;
	calfreq(s);
	for (auto i : freq) {
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;
	huffmanCodes(s.size());
	for (auto val : codes) {
		cout << val.first << " " << val.second << endl;
	}
	string encoded = "";
	for (auto i : s) {
		encoded += codes[i];
	}
	cout << encoded << endl;
	cout << "decoded string" << endl;
	cout << decode(minheap.top(), encoded);
}