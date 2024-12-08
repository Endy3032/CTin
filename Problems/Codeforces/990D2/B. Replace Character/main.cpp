#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t;

bool cmp(pair<char, vector<int>> a, pair<char, vector<int>> b) {
	return a.second.size() < b.second.size();
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;

		map<char, vector<int>> m;
		for (int i = 0; i < s.size(); i++) {
			if (m.count(s[i])) m[s[i]].push_back(i);
			else m[s[i]] = {i};
		}

		vector<pair<char, vector<int>>> v;
		for (auto i : m) v.push_back(i);
		sort(v.begin(), v.end(), cmp);
		s[v[0].second[0]] = s[v[v.size() - 1].second[0]];

		cout << s << endl;
	}
}
