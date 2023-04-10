#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

ll solve(ll n) {
    ll c = 0;
    while (n > 1) {
        if (n % 2 == 0) n /= 2;
        else if (n % 3 == 0) n = n / 3 * 2;
        else if (n % 5 == 0) n = n / 5 * 4;
        else return -1;
        c++;
    }
    return c;
}

int main() {
    ios_base::sync_with_stdio(false);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    cin >> t;
    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}
