#include <bits/stdc++.h>
using namespace std;

ifstream inp("NHIPHAN.inp");
ofstream out("NHIPHAN.out");
long long n, x;
string s;

long long loc(string s, long long i = n - 1, long long r = 0) {
  r += s[i] == '1' ? pow(2, n - 1 - i) : 0;
  return i == 0 ? r + 1 : loc(s, --i, r);
}

string val(long long x, string r, long long i = n - 1) {
  r[i] = char(x % 2 + '0');
  return i == 0 ? r : val(x /= 2, r, --i);
}

int main() {
  // 3 100 7
  inp >> n >> s >> x;
  string str(n, '0');
  // 5 110
  out << loc(s) << endl << val(--x, str);
}