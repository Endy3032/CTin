#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll cnt;

bool isPrime(ll n) {
  if (n <= 7) return n > 1 && n != 4 && n != 6;
  if (n % 2 == 0 || n % 3 == 0) return false;

  ll rt = sqrt(n);
  for (ll i = 5; i < rt; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;

  return true;
}

int main() {
  cin >> cnt;
  ll a[cnt];

  for (ll i = 0; i < cnt; i++) {
    cin >> a[i];
    if (isPrime(a[i])) cout << a[i] << "\n";
  }
}
