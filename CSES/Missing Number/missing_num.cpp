#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
  cin >> n;
  int nums[n];
  for (int i = 0; i < n - 1; i++) {
    cin >> m;
    nums[m - 1] = 1;
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] == 1) continue;
    cout << i + 1;
    break;
  } 
}
// bad code