#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> ll1D;
typedef vector<ll1D> ll2D;
ll n, k, l1, r1, l2, r2;

ll1D swp(ll1D &nums) {
	reverse(nums.begin() + l1 - 1, nums.begin() + r1);
	reverse(nums.begin() + l2 - 1, nums.begin() + r2);
	return nums;
}

void solve(ll1D &nums) {
	ll o = 1;
	ll1D nums2 = nums;
	ll2D ops = { nums2, swp(nums2) };

	while (nums2 != nums) {
		o++;
		swp(nums2);
		ops.push_back(nums2);
	}

	for (ll i : ops[k % o]) cout << i << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k >> l1 >> r1 >> l2 >> r2;

	ll1D ns(n);
	for (ll i = 0; i < n; ++i) ns[i] = i + 1;

	solve(ns);
}
