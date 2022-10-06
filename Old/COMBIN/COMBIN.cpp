#include <bits/stdc++.h>
using namespace std;

ifstream inp("COMBIN.INP");
ofstream out("COMBIN.OUT");
int n, k, m;
vector<int> nums;

bool invalid(int n, int k, int m) {
  int r = 1;
  if (k > n - k) k = n - k;

  for (int i = 0; i < k; i++) {
    r *= n - i;
    r /= i + 1;
  }

  return r < m;
}

int main() {
  cin >> n >> k >> m;
  if (invalid(n, k, m)) {
    cout << -1;
    return 0;
  }
  for (int i = 1; i < k; i++) {
    nums.push_back(i);
  }
}