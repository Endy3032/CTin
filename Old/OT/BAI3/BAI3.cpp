#include <bits/stdc++.h>
using namespace std;

int need, source, money = 0, amount = 0;
vector<pair<int, int>> eggs;

void input() {
  int price, amt;
  for (int i = 0; i < source; i++) {
    cin >> price >> amt;
    eggs.push_back(make_pair(price, amt));
  }
  sort(eggs.begin(), eggs.end());
}

void solve() {
  for (int i = 0; i < source; i++) {
    int price = eggs[i].first, amt = eggs[i].second;
    if (amount + amt > need) {
      int needLeft = need - amount;
      money += price * needLeft;
      cout << money;
      break;
    }
    money += price * amt;
    amount += amt;
  }
}

int main() {
  freopen("BAI3.inp", "r", stdin);
  freopen("BAI3.out", "w", stdout);
  cin >> need >> source;
  input();
  solve();
}
