#include <bits/stdc++.h>
using namespace std;

set<int> solve(int n) {
	int sum = 0;
	set<int> out;
	vector<int> nums(n), bits(n);

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	out.insert(sum);

	bits[0] = 1;
	fill(bits.begin() + 1, bits.end(), 0);

	while (find(bits.begin(), bits.end(), 0) != bits.end()) {
		sum = 0;

		for (int i = 0; i < n; i++) if (bits[i]) sum += nums[i];
		out.insert(sum);

		bits[0]++;
		for (int i = 0; i < n - 1; i++) {
			if (bits[i] == 2) {
				bits[i] = 0;
				bits[i + 1]++;
			}
		}
	}

	return out;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	set<int> out = solve(n);

	cout << out.size() << endl;
	for (auto i : out) cout << i << " ";
	cout << endl;
}
