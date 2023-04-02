#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.OUT", "w", stdout);
    cin >> n;
    ll rt = sqrt(n);
    if (rt * rt == n) cout << rt;
    else cout << -1;
    cout << endl;
}
