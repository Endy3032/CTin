#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a, b;

string solve() {
  for (int i = 0; i <= n / a; i++) {
    if ((n - i * a) % b == 0) return "Yes";
  }
  return "No";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> n;
	cout << solve() << endl;
}
