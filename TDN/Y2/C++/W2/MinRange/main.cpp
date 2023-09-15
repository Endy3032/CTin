#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, r;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> n >> r;
  deque<int> dq;
  vector<ll> ns(n);
  for (ll i = 0; i < n; i++) cin >> ns[i];

  for (ll i = 0; i < n; i++) {
    while (!dq.empty() && dq.front() < i - r + 1) dq.pop_front();
    while (!dq.empty() && ns[dq.back()] >= ns[i]) dq.pop_back();
    dq.push_back(i);
    if (i >= r - 1) cout << ns[dq.front()] << " ";
  }

  cout << "\n";
}
