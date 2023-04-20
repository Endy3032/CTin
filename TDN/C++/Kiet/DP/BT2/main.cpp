#include <bits/stdc++.h>

#define ll long long
#define ii pair<int, int>
#define llll pair<ll, ll>
#define ldld pair<ld, ld>
#define ld long double
#define el "\n"
#define sp " "
#define fi first
#define se second
#define modulo (ll)(1e9 + 7)

using namespace std;

// const ld y1

ll n, m, ans = LLONG_MAX, temp;

vector<ll> v;

int main() {
  cin >> n >> m;
	ll a[n][m], dp[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
			cin >> a[i][j];

			if (i == 0) dp[0][j] = a[0][j] + (j > 0 ? dp[0][j - 1] : 0);
      else if (j == 0) dp[i][0] = a[i][0] + (i > 0 ? dp[i - 1][0] : 0);
      else dp[i][j] = 0;
		}
  }

  for (int i = 0; i < m; i++) {
    dp[0][i] = dp[0][i - 1] + a[1][i];
    dp[n][i] = dp[n][i - 1] + a[n][i];
  }

  for (int j = 1; j <= m; j++)

  {
    for (int i = 2; i <= n - 1; i++) dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i + 1][j - 1])) + a[i][j];
  }

  for (int i = 1; i <= n; i++)

  {
    if (dp[i][m] < ans)

    {
      ans = dp[i][m];

      temp = i;
    }
  }

  cout << ans << el;

  while (m > 0)

  {
    v.push_back(temp);

    for (int i = temp - 1; i <= temp + 1; i++)

    {
      if (dp[i][m - 1] == dp[temp][m] - a[temp][m])

      {
        temp = i;

        break;
      }
    }

    m--;
  }

  reverse(v.begin(), v.end());

  for (ll i : v) cout << i << sp;

  return 0;
}

// code by icyalmond