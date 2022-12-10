#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n, a;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  while (n--) {
    cin >> a;
    cout << (a % 2 == 0) << endl;
  }
}
