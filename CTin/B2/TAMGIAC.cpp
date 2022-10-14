#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
ifstream inp("TAMGIAC.inp");
ofstream out("TAMGIAC.out");

ld length(int xa, int ya, int xb, int yb) {
  return sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
}

ld area(ld a, ld b, ld c) {
  ld p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
  ld a, b, c, x, y, z, xa, xb, xc, xm, ya, yb, yc, ym, s, s1, s2, s3;
  inp >> xa >> ya >> xb >> yb >> xc >> yc >> xm >> ym;

  a = length(xb, yb, xc, yc);
  b = length(xa, ya, xc, yc);
  c = length(xa, ya, xb, yb);
  x = length(xa, ya, xm, ym);
  y = length(xb, yb, xm, ym);
  z = length(xc, yc, xm, ym);

  s = area(a, b, c);
  s1 = area(x, y, c);
  s2 = area(x, z, b);
  s3 = area(y, z, a);

  if (abs(s - s1 - s2 - s3) < 1e-9) cout << "YES";
  else cout << "NO";
  cout << endl;
}
