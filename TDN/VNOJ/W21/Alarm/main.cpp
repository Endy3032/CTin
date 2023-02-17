#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll h, m;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> h >> m;
  m -= 45;
  if (m < 0) {
    h--;
    m += 60;
  }
  if (h < 0) h += 24;
  cout << h << " " << m << endl;
}
