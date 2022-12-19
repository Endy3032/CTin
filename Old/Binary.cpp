#include <bits/stdc++.h>
using namespace std;

int nums[10] = {2,4,6,8,10,12,14,16,18,20};
int binarySearch(int l, int r, long long k) {
  int x = l, y = r;
  while (x < y) {
    int z = (x + y) / 2;
    cout << x << " " << y << " " << z << " " << k << endl;
    if (nums[z] == k) return z;
    nums[z] < k ? x = ++z : y = --z;
  }
  return -1;
}

int main() {
  cout << binarySearch(0, 9, 8);
}