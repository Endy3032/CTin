#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool backspaceCompare(string s, string t) {
		stack<char> s1 = process(s), s2 = process(t);
		return s1 == s2;
	}

private:
	stack<char> process(string s) {
		stack<char> st;
		for (char c: s) {
			if (c == '#') {
				if (!st.empty()) st.pop();
			} else st.push(c);
		}
		return st;
	}
};

int main() {
	Solution sol;
	string s, t;
	cin >> s >> t;
	cout << sol.backspaceCompare(s, t);
}
