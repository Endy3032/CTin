#include <bits/stdc++.h>
using namespace std;

ifstream inp("ABINLIS.inp");
ofstream out("ABINLIS.out");
#define cin inp
#define cout out

typedef long long ll;
ll a, b, a0 = 0, a1 = 0, b0 = 0, b1 = 0, o = 0, tmp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a;
	vector<int> as(a);
	for (int &i: as) {
		cin >> i;
		if (i == 1) a1++;
	}

	cin >> b;
	vector<int> bs(b);
	for (int &i: bs) {
		cin >> i;
		if (i == 1) b1++;
	}

	vector<pair<int, int>> ac, bc;

	for (int i: as) {
		if (i == 0) a0++;
		else {
			ac.push_back({ a0, a1 });
			a1--;
		}
	}

	for (int i: bs) {
		if (i == 0) b0++;
		else {
			bc.push_back({ b0, b1 });
			b1--;
		}
	}

	for (auto x: ac) {
		for (auto y: bc) {
			tmp = min(x.first, y.first) + min(x.second, y.second);
			o = max(o, tmp);
		}
	}

	cout << o << endl;
}