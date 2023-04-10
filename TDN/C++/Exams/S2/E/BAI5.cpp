#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, k, o = 0;

int main() {
    ios_base::sync_with_stdio(false);
    freopen("BAI5.INP", "r", stdin);
    freopen("BAI5.OUT", "w", stdout);
    cin >> n >> k;
    vector<ll> ns(n);
    for (ll i = 0; i < n; i++) cin >> ns[i];
    sort(ns.begin(), ns.end());

    while (ns.size() > 0) {
        ll a = 0, b = ns.size() - 1;
        bool found = false;

        while (ns[a] + ns[b] > k) {
            b--;
            if (b <= a) {
                ns.erase(ns.begin() + ns.size() - 1);
                o++;
                found = true;
                break;
            }
        }

        if (found) continue;
        o++;
        ns.erase(ns.begin() + b);
        ns.erase(ns.begin() + a);
    }
    cout << o << endl;
}
