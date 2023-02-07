#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, o = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	set<ll> out;
	vector<ll> nums(n), bits(n);

	for (ll i = 0; i < n; i++) cin >> nums[i];

	fill(bits.begin(), bits.end(), 0);
	bits[0] = 1;

	for (ll i = 0; i < pow(2, n) - 1; i++) {
		ll sum = 0;

		for (ll i = 0; i < n; i++) {
			if (bits[i]) sum += nums[i];
		}

		out.insert(sum);

		bits[0]++;
		for (ll i = 0; i < n - 1; i++) {
			if (bits[i] == 2) {
				bits[i] = 0;
				bits[i + 1]++;
			}
		}
	}

	ll sum;
	for (ll i = 0; i < n; i++) sum += nums[i];
	out.insert(sum);

	cout << out.size() << endl;
	for (auto i : out) cout << i << " ";
	cout << endl;
}
