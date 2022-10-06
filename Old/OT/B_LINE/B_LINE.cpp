#include <bits/stdc++.h>
using namespace std;

int r, c, k, num;
vector<int> nums, freq;

void input() {
  cin >> r >> c >> k;
  for (int i = 0; i < r * c; i++) {
    cin >> num;
    nums.push_back(num);
  }
  sort(nums.begin(), nums.end());
}

void compress() {
  num = 0;
  for (int i = 0; i < r * c; i++) {
    num++;
    if (nums[i] != nums[i + 1]) {
      freq.push_back(num);
      num = 0;
    }
  }
  sort(freq.begin(), freq.end(), greater<int>());
}

void solve() {
  num = 0;
  for (int i = 0; i < k; i++) {
    num += freq[i];
  }
  cout << num;
}

int main() {
  freopen("B_LINE.inp", "r", stdin);
  freopen("B_LINE.out", "w", stdout);
  input();
  compress();
  solve();
}
