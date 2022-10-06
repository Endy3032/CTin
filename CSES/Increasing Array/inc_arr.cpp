#include <bits/stdc++.h>
using namespace std;

long long n, c;

int main() {
  cin >> n;
  long long nums[n];
  for (long long i = 0; i < n; i++) {
    cin >> nums[i];
    if (i == 0) continue;
    if (nums[i] < nums[i - 1]) {
      long long inc = nums[i - 1] - nums[i];
      nums[i] += inc;
      c += inc;
    }
  }
  cout << c;
}