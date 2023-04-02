#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

int main() {
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);

    cin >> n >> m;

    if (m % n == 0) {
        if (m / n - n / 2 <= 0) cout << -1;
        else cout << m / n - n / 2 << " " << m / n + n / 2;
    } else {
        ll a = 1, b = n, s = n * (n + 1) / 2;
        ll r = ((m - s) % n == 0) ? 0 : 1;

        a += (m - s) / n + r;
        b += (m - s) / n + r;
        s += ((m - s) / n + r) * n;
        // edge case?
        if (s == m && a <= 0) cout << -1;
        else if (s == m) cout << a << " " << b;
        else if (a - 1 <= 0) cout << -1;
        else cout << a - 1 << " " << b;
    }
    cout << endl;
}
