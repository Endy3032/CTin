#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ifstream inp("DP_A3.inp");
ofstream out("DP_A3.out");

ll n, m = -1e9;
vector<ll> nums;

int main() {
	inp >> n;
	for (ll i = 0; i < n; i++) {
		inp >> m;
		nums.push_back(m);
	}

	vector<ll> mx(n), mn(n);
	mx[0] = nums[0];
	mn[n - 1] = nums[n - 1];

	for (ll i = 1; i < n; i++) {
		mx[i] = max(mx[i - 1], nums[i]);
		mn[n - i - 1] = min(mn[n - i], nums[n - i - 1]);
	}

	for (ll i = 1; i < n - 1; i++) m = max(m, nums[i] + mx[i - 1] - mn[i + 1]);
	out << m << endl;
}
