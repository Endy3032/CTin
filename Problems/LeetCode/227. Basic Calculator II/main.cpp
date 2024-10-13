#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int calculate(string s) {
		stack<char> st;

		for (char c: s) {
			if (c == ' ') continue;
			if (c == '+' || c == '-' || c == '*' || c == '/') {
				int a = 0, b = 0;
				while (!st.empty() && st.top() != '+' && st.top() != '-' && st.top() != '*' && st.top() != '/') {
					a = a * 10 + (st.top() - '0');
					st.pop();
				}
				if (st.empty()) {
					st.push(c);
					continue;
				}
				char op = st.top();
				st.pop();
				while (!st.empty() && st.top() != '+' && st.top() != '-' && st.top() != '*' && st.top() != '/') {
					b = b * 10 + (st.top() - '0');
					st.pop();
				}
				if (op == '+') st.push(b + a + '0');
				else if (op == '-') st.push(b - a + '0');
				else if (op == '*') st.push(b * a + '0');
				else if (op == '/') st.push(b / a + '0');
				st.push(c);
			} else st.push(c);
		}
	}
};