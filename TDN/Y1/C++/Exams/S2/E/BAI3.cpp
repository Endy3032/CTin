#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n, k, a;

ll solve(ll n, ll k) {
    set<ll> ns;

    while (n--) {
        cin >> a;
        ns.insert(a);
    }

    if (*ns.rbegin() - *ns.begin() > k * 2) return -1;
    return *ns.begin() + k;
}

int main() {
    ios_base::sync_with_stdio(false);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}
