#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string removeDuplicates(string s) {
		string ans;
		for (auto i: s) ans.empty() || ans.back() != i ? ans.push_back(i) : ans.pop_back();
		return ans;
	}
};

int main() {
	Solution sol;
	string s;
	cin >> s;
	cout << "\n" << sol.removeDuplicates(s);
}
