#include <bits/stdc++.h>
using namespace std;

ifstream inp("TNT.inp");
ofstream out("TNT.out");
#define cin inp
#define cout out

typedef long long ll;
ll l, r, c = 0;
vector<bool> p(73);

bool isPrime(ll n) {
  if (n <= 7) return n > 1 && n != 4 && n != 6;
  if (n % 2 == 0 || n % 3 == 0) return false;

  ll rt = sqrt(n);
  for (ll i = 5; i < rt; i += 6)
    if (n % i == 0 || n % (i + 2) == 0) return false;

  return true;
}

ll sum(ll n) {
	ll o = 0;
	while (n > 0) {
		o += n % 10;
		n /= 10;
	}
	return o;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (ll i = 0; i <= 72; i++) p[i] = isPrime(i);

	cin >> l >> r;
	for (ll i = l; i < r; i++) if (p[sum(i)]) c++;
	cout << c << endl;
}
