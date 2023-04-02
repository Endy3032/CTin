#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, x, m;

int main() {
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    cin >> n >> x >> m;

    ll t = x, s = x, tt;
    for (ll i = 1; i < n; i++) {
        t = (t * t) % m;
        // repetitive r
        if (t == tt) {
            s += tt * (n - i);
            break;
        }
        tt = t;
        s += t;
    }
    cout << s << endl;
}
