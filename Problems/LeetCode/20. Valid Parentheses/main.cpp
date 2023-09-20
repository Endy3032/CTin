#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> st;
		vector<pair<char, char>> v = { {')', '('}, {']', '['}, {'}', '{'} };

		for (char c: s) {
			if (c == '(' || c == '[' || c == '{') st.push(c);
			else {
				if (st.empty()) return false;
				for (auto i: v) if (c == i.first && st.top() != i.second) return false;
				st.pop();
			}
		}

		return st.empty();
	}
};
