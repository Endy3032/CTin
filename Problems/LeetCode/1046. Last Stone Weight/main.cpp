#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int lastStoneWeight(vector<int> &stones) {
		priority_queue<int> s;
		for (auto i: stones) s.push(i);
		while (s.size() > 1) {
			int a = s.top();
			s.pop();
			int b = s.top();
			s.pop();
			if (a != b) s.push(abs(a - b));
		}
		return !s.empty() ? s.top() : 0;
	}
};
