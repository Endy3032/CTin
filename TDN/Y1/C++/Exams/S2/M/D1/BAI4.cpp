#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, c = 0;

int main() {
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);

    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    // salvage score
    for (ll i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            c += a[i - 1] - a[i];
            if (i < n - 1 && a[i] == a[i + 1]) a[i - 1] = a[i];
            else a[i] = a[i - 1];
        }
    }
    cout << c << endl;
}
