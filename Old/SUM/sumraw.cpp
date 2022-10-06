#include <bits/stdc++.h>
using namespace std;

ifstream inp("sum.inp");
ofstream out("sum.out");
int a, b, r;

int main() {
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    int n = i;
    while (n > 0) {
      r += n % 10;
      n /= 10;
    }
  }
  cout << r;
}