#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, chk[13];

void solve(vector<int> v, ll a) {
  if (v.size() == n) {
    for (auto i: v) cout << i << " ";
		cout << endl;
    return;
  }

  for (ll i = 0; i < a; i++) {
    if (chk[i]) continue;
    chk[i] = 1;
		v.push_back(i + 1);
    solve(v, a);
		v.pop_back();
    chk[i] = 0;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;
	vector<int> v;
  for (ll i = 1; i <= n; i++) solve(v, i);
}
