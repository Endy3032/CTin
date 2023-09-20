#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string removeDuplicates(string s) {
		string ans;

		for (int i = 0; i < s.length(); i++)
			ans.empty() || ans.back() != s[i] ? ans.push_back(s[i]) : ans.pop_back();

		return ans;
	}
};

int main() {
	Solution sol;
	string s;
	cin >> s;
	cout << "\n" << sol.removeDuplicates(s);
}
