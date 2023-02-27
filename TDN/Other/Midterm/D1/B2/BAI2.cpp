#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m, a, b;
vector<pair<ll, pair<ll, ll>>> s;

int main() {
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> a >> b;
        s.push_back(make_pair(a * b, make_pair(min(a, b), max(a, b))));
    }
    sort(s.begin(), s.end());

    a = 0, b = 0;

    for (ll x = 1; x <= n; x++) {
        for (ll y = x; y <= n - x; y++) {
            if (s[n - y].second.first < s[n - y + 1].second.first && s[n - y].second.second < s[n - y + 1].second.second) a++;
        }
        b = max(a, b);
    }
    cout << b << endl;
}
