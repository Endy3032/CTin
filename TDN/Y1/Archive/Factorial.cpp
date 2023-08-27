#include <bits/stdc++.h>
using namespace std;

ifstream inp("factorial.inp");
ofstream out("factorial.out");
int z, i = 1;

int valid(int z, int n) {
  int c = 0;
  while (n > 0) {
    n /= 5;
    c += n;
    if (c > z) return -1;
  }
  return c;
}

int main() {
  ios_base::sync_with_stdio(false);
  inp.tie(NULL);
  out.tie(NULL);

  inp >> z;
  int a = valid(z, i);
  while (a != z) {
    if (a == -1) {
      out << -1;
      return 0;
    }
    a = valid(z, ++i);
  }
  out << i;
}
