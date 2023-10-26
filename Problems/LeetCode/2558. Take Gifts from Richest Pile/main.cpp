#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	long long pickGifts(vector<int> &gifts, int k) {
		priority_queue<int> g;
		for (auto i: gifts) g.push(i);
		while (k--) {
			int t = g.top();
			g.pop();
			g.push(sqrt(t));
		}
		long long ans = 0;
		while (!g.empty()) {
			ans += g.top();
			g.pop();
		}
		return ans;
	}
};
