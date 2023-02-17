#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;
vector<ll> v, s(2);

void solve(string str, char val) {
  str += val;
  if (str.size() == n) {
    for (ll i = 0; i < n; i++) s[str[i]] += s[i];

    return;
  }

  solve(str, '0');
  solve(str, '1');
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  while (n--) {
    cin >> m;
    v.push_back(m);
  }
  sort(v.begin(), v.end());
  solve("", '0');
  solve("", '1');
}
