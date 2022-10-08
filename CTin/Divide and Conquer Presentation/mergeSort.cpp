#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printArr(ll a[], ll l, ll r) {
  for (ll i = l; i < r; i++) cout << a[i] << " ";
  cout << "\n";
}

void merge(ll a[], ll l, ll m, ll r) {
  ll x = l, y = m, z[r - l + 1], c = 0;

  while (x < m && y < r) {
    if (a[x] < a[y]) {
      z[c] = a[x];
      x++;
    } else {
      z[c] = a[y];
      y++;
    }
    c++;
  }

  while (x < m) {
    z[c] = a[x];
    x++; c++;
  }

  while (y < r) {
    z[c] = a[y];
    y++; c++;
  }

  for (ll i = l; i < r; i++) a[i] = z[i - l];
}

void mergeSort(ll a[], ll l, ll r) {
  if (r - l <= 1) return;
  ll m = l + (r - l) / 2;

  mergeSort(a, l, m);
  mergeSort(a, m, r);
  merge(a, l, m, r);
}

int main() {
  ll arr[] = { 5, 1, 6, 0, 7, 2, 9, 8, 10 };

  auto arrSize = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr, 0, arrSize);
  printArr(arr, 0, arrSize);
}