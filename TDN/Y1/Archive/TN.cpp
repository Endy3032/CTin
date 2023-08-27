#include <bits/stdc++.h>
using namespace std;

ifstream inp("tn.inp");
ofstream out("tn.out");
int n, m;
vector<int> nums;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> m;
    nums.push_back(m);
  }
  m = nums[0];
  for (int i = 1; i < n; i++) m = lcm(m, nums[i]);
  cout << m << endl;
  for (int i = 0; i < n; i++) {
    cout << m / nums[i] << " ";
  }
}
