#include <bits/stdc++.h>
using namespace std;

string dna;
vector<int> sz;

int main() {
  cin >> dna;
  int s = 1, i = 0, e = dna.size() - 1;
  if (e == 0) {
    cout << 1;
    return 0;
  }
  while (i < e) {
    while (dna[i] == dna[i + 1]) {
      s++; i++;
    }
    sz.push_back(s);
    s = 1; i++;
  }
  sort(sz.begin(), sz.end());
  cout << sz[sz.size() - 1];
}
