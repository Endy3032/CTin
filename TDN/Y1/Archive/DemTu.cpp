#include <bits/stdc++.h>
using namespace std;

string line;

int countWords(string a) {
  int i = 0, cnt = 0, sz = a.size();
  if (sz == 0) return 0;

  while (a[i] == ' ') i++;
  for (; i < sz; i++) if (a[i] == ' ' && a[i + 1] != ' ') cnt++;
  if (a[sz - 1] == ' ') cnt--;

  return cnt + 1;
}

int main() {
  /**
   *     Lop Tin hoc
   * File    van ban 1
   * Thi HSG Tin hoc    11
  */
  freopen("DEMTU.inp", "r", stdin);
  // 3 4 5 0 0 0 0
  freopen("DEMTU.out", "w", stdout);
  while (getline(cin, line)) cout << countWords(line) << endl;
}
