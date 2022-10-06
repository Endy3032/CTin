#include <bits/stdc++.h>
using namespace std;

long long a, b, n;
vector<long long> x, y;

int main() {
  cin >> a >> b;
  for (int i = 0; i < a + b; i++) {
    cin >> n;
    if (i < a) x.push_back(n);
    else y.push_back(n);
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  a = 0; b = 0;
  for ()
}