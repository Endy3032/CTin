#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;

ll n;
db r = 1;

db binpow(db a, long long b) {
  if (b == 0) return 1;
  db res = binpow(a, b / 2);
  if (b % 2) return res * res * a;
  else return res * res;
}

int main() {
  cin >> n;
	db r = binpow(2, n);
  stringstream s;
  s << fixed << setprecision(0) << r;
  cout << s.str() << endl;
}
