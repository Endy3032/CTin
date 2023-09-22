#include <bits/stdc++.h>
using namespace std;

typedef vector<int> int1D;
typedef vector<int1D> int2D;
int h, w, py, px, ans = 0;
int2D coords = { { 0, -1 }, { 1, 0 }, { 0, 1 }, { -1, 0 } };

void dfs(int2D &grid, int x, int y) {
	grid[y][x]++, ans++;
	for (auto p: coords) {
		px = x + p[0], py = y + p[1];
		if (px < 0 || px >= w || py < 0 || py >= h || grid[py][px]) continue;
		dfs(grid, px, py);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> h >> w >> py >> px;
	int2D ns(h, int1D(w, 0));

	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			cin >> ns[y][x];
		}
	}

	dfs(ns, --px, --py);
	cout << ans << endl;
}
