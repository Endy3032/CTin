#include <bits/stdc++.h>
using namespace std;

ifstream inp("sumgcd.inp");
ofstream out("sumgcd.out");
int n, m, mx = 0;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int main() {
  ios_base::sync_with_stdio(false);
  inp.tie(0);
  out.tie(0);

  inp >> n;
  int nums[n], o[n];
  for (int i = 0; i < n; i++) {
    inp >> nums[i];
    mx = max(mx, nums[i]);
    if (nums[i] == 1) o[i] = 0;
    else o[i] = nums[i] - 1;
  }
  for (int x = 2; x < mx; x++) {
    for (int y = x + 1; y <= mx; y++) {
      int g = gcd(x, y);
      for (int i = 0; i < n; i++) {
        if (x <= nums[i] && y <= nums[i]) o[i] += g;
      }
    }
  }
  for (int i = 0; i < n; i++) out << o[i] << endl;
}