#include <bits/stdc++.h>
using namespace std;

long int amount, money, nums[100000];

void inp() {
  cin >> amount >> money;
  for (int i = 0; i < amount; i++) {
    cin >> nums[i];
  }
  sort(nums, nums + amount, greater<int>());
}

int solve() {
  int x = 0, y = amount - 1, ans;
  while (nums[x] + nums[y] > money) x++;
  y = x + 1;
  while (nums[x] + nums[y] > money) y++;
  ans = nums[x] + nums[y];

  for (int a = x; a < amount; a++) {
    for (int b = a + 1; b < amount; b++) {
      int tans = nums[a] + nums[b];
      if (tans <= money && tans > ans) ans = tans;
      else break;
    }
  }
  return ans;
}

int main() {
  freopen("GIFTS.inp", "r", stdin);
  freopen("GIFTS.out", "w", stdout);
  inp();
  cout << solve();
}
