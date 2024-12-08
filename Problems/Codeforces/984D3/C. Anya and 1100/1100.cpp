#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, i;
char c;

pair<int, bool> has1100(string s, int start = 0, int end = -1) {
	int n = s.size();
	if (n > 3) {
		for (int i = max(start, 0); i < min(end == -1 ? n - 3 : end, n - 3); i++) {
			if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
				return { i, true };
			}
		}
	}
	return { -1, false };
}

void updateIndices(vector<int>& indices, string s, int start, int end) {
	for (int j = 0; j < ll(indices.size()); j++) {
		if (indices[j] >= start && indices[j] <= end) indices.erase(indices.begin() + j);
	}
	auto find = has1100(s, start, end);
	while (find.second) {
		indices.push_back(find.first);
		find = has1100(s, find.first + 1, end);
	}
	sort(indices.begin(), indices.end());
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int sz = s.size(), n;

		vector<int> indices;
		updateIndices(indices, s, 0, sz - 1);

		cin >> n;
		while (n--) {
			cin >> i >> c;
			s[--i] = c;
			updateIndices(indices, s, i - 3, i + 3);
			cout << (indices.size() > 0 ? "YES" : "NO") << endl;
		}
	}
}
