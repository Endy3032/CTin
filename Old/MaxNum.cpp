#include <bits/stdc++.h>
using namespace std;

ifstream inp("MAXNUM.inp");
ofstream out("MAXNUM.out");
vector<int> nums;
int numC, n = 0, mx = 0, mxi = 0;

int main() {
  /**
   * 8
   * 10 2 6 2 5 2 1 2
  */
  inp >> numC;
  for (int i = 0; i < numC; i++) {
    inp >> n;
    int tmx = max(mx, n);
    if (mx != tmx) {
      mx = tmx;
      mxi = i;
    }
    nums.push_back(n);
  }
  cout << mx << " " << mxi;
  int a = 0, b = 0;
  for (int i = 0; i < mxi; i++) a += nums[i];
  for (int i = mxi + 1; i < numC; i++) b += nums[i];


  /* if (mxi == 0 || mxi == numC - 1) {
    nums = reverse(nums.begin(), nums.end());
    for (int i = 1; i < numc; i++) {
      n += nums[i];
      if (n == mx) break;
      else if (n > mx)
    }
  } */
  cout << a << " " << b;
}
