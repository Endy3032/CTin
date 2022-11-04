#include <bits/stdc++.h>
using namespace std;

ifstream inp("TNT.inp");
ofstream out("TNT.out");
#define cin inp
#define cout out

typedef long long ll;
ll l, r, c = 0;
vector<bool> mm(73);
vector<bool> acd(73);

bool isPrime(ll n) {
  if (n <= 7) return n > 1 && n != 4 && n != 6;
  if (n % 2 == 0 || n % 3 == 0) return false;

  ll rt = sqrt(n);
  for (ll i = 5; i < rt; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
			mm[n] = false;
			return false;
		}
	}

	mm[n] = true;
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

bool sumPrime(ll n) {
	ll s = sum(n);
	if (acd[s] == true) return mm[s];
	else {
		acd[s] = true;
		return isPrime(s);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> l >> r;
	for (ll i = l; i < r; i++) if (sumPrime(i)) c++;
	cout << c << endl;
}
