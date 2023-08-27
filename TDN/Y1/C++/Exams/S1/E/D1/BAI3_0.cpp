#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;
vector<ll> s(4);

int main() {
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);

    cin >> n;
    while (n--) {
        cin >> m;
        s[--m]++;
    }

    // 4
    n = s[3];

    // 1 + 3
    m = min(s[0], s[2]);
    s[0] -= m;
    s[2] -= m;
    n += m + s[2];

    // 2
    m = s[1] / 2;
    n += m;
    s[1] -= m;

    // 1 + 2
    m = min(ll(ceil(double(s[0]) / 2)), s[1]);
    s[0] -= m;
    s[1] -= m;
    n += m;

    // 1
    if (s[0] > 0) n += ceil(double(s[0]) / 4);

    cout << n << endl;
}
