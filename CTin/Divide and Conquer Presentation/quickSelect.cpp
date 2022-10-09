#include <bits/stdc++.h>
using namespace std;

void printArr(int a[], int l = 0, int r = -1) {
  if (r == -1) r = 8;
  for (int i = l; i < r; i++) cout << a[i] << " ";
  cout << "\n";
}

int partition(int arr[], int x, int y, int p){
  swap(arr[p], arr[y]);
  printArr(arr);
  int i = x;
  int j = y - 1;
  while (i <= j) {
    while (arr[i] < arr[y] && i <= j) {
      cout << arr[i] << "i ";
      i++;
    }
    cout << i << " " << j << " ";
    while (arr[j] >= arr[y] && i <= j) {
      cout << arr[j] << "j ";
      j--;
    }
    cout << i << " " << j << " " << endl;
    if (i < j) {
      swap(arr[i], arr[j]);
      printArr(arr);
    }
  }
  swap(arr[i], arr[y]);
  return i;
}

int quick_select(int arr[], int x, int y, int k){
	if (y <= x) return arr[x];
	else {
    printArr(arr);
		int p = (y + x) / 2;
		int r = partition(arr, x, y, p);
    printArr(arr);
    cout << "\n" << x << r << k << "\n";
		if (k < r) return quick_select(arr, x, r-1, k);
		else if (k > r) return quick_select(arr, r+1, y, k);
		else return arr[r];
	}
}

int main() {
  int a[] = {3, 2, 5, 4, 8, 9, 1, 7};
  cout << quick_select(a, 0, 7, 5);
}
