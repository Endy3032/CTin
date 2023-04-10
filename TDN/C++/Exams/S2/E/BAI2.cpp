#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, o = LLONG_MAX;

int main() {
    ios_base::sync_with_stdio(false);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    cin >> n;
    set<ll> s;
    vector<ll> ns(n);

    for (ll i = 0; i < n; i++) {
        cin >> ns[i];
        s.insert(ns[i]);
    }

    for (ll i: s) {
        auto a = find(ns.begin(), ns.end(), i);
        while (a != ns.end()) {
            auto b = find(a + 1, ns.end(), i);
            if (b == ns.end()) break;
            o = min(o, ll(b - a));
            a = b;
        }
    }
    cout << o << endl;
}
