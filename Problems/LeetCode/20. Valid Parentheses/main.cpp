#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> st;
		vector<string> v = { "()", "[]", "{}" };

		for (char c: s) {
			if (c == '(' || c == '[' || c == '{') st.push(c);
			else {
				if (st.empty()) return false;
				for (auto i: v) if (st.top() == i[0] && c != i[1]) return false;
				st.pop();
			}
		}

		return st.empty();
	}
};
