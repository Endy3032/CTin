#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, a, b;

int main() {
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    cin >> n;

    a = ll(ceil(double(n) / 2));
    b = n / 2;

    ll c[3][a + 1];

    for (ll x = 0; x <= 2; x++) {
        for (ll y = 0; y <= a; y++) {
            c[x][y] = 0;
        }
    }

    for (ll x = 1; x <= 2; x++) {
        if (x == 1) m = a;
        else m = b;
        for (ll y = 1; y <= m; y++) {
            cin >> c[x][y];
            c[x][y] += c[x - 1][y] + c[x][y - 1] - c[x - 1][y - 1];
        }
    }

    for (ll x = 0; x <= 2; x++) {
        for (ll y = 0; y <= m; y++) {
            cout << c[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;

    m = -1e9;
    for (ll ln = 2; ln <= a; ln += 2) {
        ll r = a - ln + 1;
        for (ll l = 1; l <= r; l++) {
            m = max(m, c[2][l + ln] - c[2][l - 1]);
            cout << ln << " " << l << " " << m << " | " << c[2][l + ln] << " " << c[2][l - 1] << endl;
        }
    }
    cout << m;
}
