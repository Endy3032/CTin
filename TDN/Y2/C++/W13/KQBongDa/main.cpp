#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n;

struct team { int id, score = 0, win = 0, lose = 0, draw = 0; };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	team a[n];

	for (int i = 0; i < n; i++) {
		a[i].id = i + 1;
		for (int j = 0; j < n; j++) {
			if (j == i) continue;
			int x; cin >> x;
			a[i].score += x;

			if (x == 3) a[i].win++;
			else if (x == 1) a[i].draw++;
			else a[i].lose++;
		}
	}
}
