#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	set<int> a;
	map<int, int> b;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.insert(x);
		b[x]++;
	}
	for (auto i : a) cout << i << " ";
	for (auto i : b) cout << endl << i.first << " " << i.second;
	cout << endl;
}
