#include <bits/stdc++.h>
using namespace std;

ifstream inp("sum.inp");
ofstream out("sum.out");
int a, b, r;

int main() {
  // 1 2000
  inp >> a >> b;
  for (int x = a; x <= b; x++) {
    stringstream s;
    s << x;
    string n = s.str();
    for (int y = 0; y < n.length(); y++) {
      if (n[y] == '0') continue;
      r += n[y] - '0';
    }
  }
  // 28002
  out << r;
}