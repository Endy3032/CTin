#include <bits/stdc++.h>
using namespace std;

int nums;

bool notPrime(int n) {
  if (n % 2 == 0) return true;
  int rt = sqrt(n);
  for (int i = 3; i <= rt; i += 2) {
    if (n % i == 0) return true;
  }
  return false;
}

void solve(int num) {
  int sum = 0;
  int half = num / 2;
  for (int i = 4; i <= half; i++) {
    if (num % i != 0) continue;
    if (notPrime(i)) sum += i;
  }
  if (notPrime(num)) sum += num;
  cout << sum << endl;
}

int main() {
  /**
   * 3
   * 12
   * 3
   * 4
  */
  freopen("SUMNUM.inp", "r", stdin);
  /**
   * 12
   * 0
   * 4
  */
  freopen("SUMNUM.out", "w", stdout);
  int num;
  cin >> nums;
  for (int i = 0; i < nums; i++) {
    cin >> num;
    solve(num);
  }
}
