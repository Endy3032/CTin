#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, n;

int main() {
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);

    cin >> n >> a;
    map<ll, ll> ns;

    // safe
    for (ll i = 0; i < 10; i++) ns[i] = 0;

    for (ll i = 0; i < n; i++) {
        ll x = a + i;
        while (x > 0) {
            ns[x % 10]++;
            x /= 10;
        }
    }

    for (auto i: ns) cout << i.second << " ";
    cout << endl;
}
