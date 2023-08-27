#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ifstream inp("DP_A2.inp");
ofstream out("DP_A2.out");

ll n, m = -1e9;
vector<ll> nums;

int main() {
	inp >> n;
	for (ll i = 0; i < n; i++) {
		inp >> m;
		nums.push_back(m);
	}

	vector<ll> mn(n);
	mn[0] = nums[0];

	for (ll i = 1; i < n; i++) mn[i] = min(mn[i - 1], nums[i]);

	for (ll i = 1; i < n; i++) m = max(m, nums[i] - mn[i - 1]);
	out << m << endl;
}
