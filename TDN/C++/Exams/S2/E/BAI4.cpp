#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll t, n;

string solve(ll n, vector<string> s) {
    ll x, y;
    bool found = false;

    for (ll i = 0; i < n; i++) {
        if (s[0][i] == '*') {
            x = i, y = 0;
            break;
        } else if (s[1][i] == '*') {
            x = i, y = 1;
            break;
        }
    }

    for (ll i = x; i < n; i++) {
        if (i == x && s[0][i] == '*' && s[1][i] == '*') continue;
        else if (s[0][i] == '*' && s[1][i] == '*' && s[0][i + 1] == '*' && s[1][i + 1] == '*') return "NO";

        if (found && (s[y][i] == '*' || s[!y][i] == '*')) return "NO";

        if ((s[y][i + 1] != '*' && s[!y][i] != '*') || (s[y][i] != '*' && s[!y][i] != '*')) {
            found = true;
            continue;
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    freopen("BAI4.INP", "r", stdin);
    freopen("BAI4.OUT", "w", stdout);

    cin >> t;
    while (t--) {
        vector<string> s(2);
        cin >> n >> s[0] >> s[1];
        cout << solve(n, s) << endl;
    }
}
