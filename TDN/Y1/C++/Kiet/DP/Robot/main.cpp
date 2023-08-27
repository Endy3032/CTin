#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, m;

int main() {
  cin >> n >> m;

  ll a[n][m], dp[n][m];

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < m; j++) {
      cin >> a[i][j];

      if (i == 0) dp[0][j] = a[0][j] + (j > 0 ? dp[0][j - 1] : 0);
      else if (j == 0) dp[i][0] = a[i][0] + (i > 0 ? dp[i - 1][0] : 0);
      else dp[i][j] = 0;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
    }
  }

  cout << dp[n - 1][m - 1] << endl;
}
