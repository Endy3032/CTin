#include <bits/stdc++.h>
using namespace std;

typedef vector<int> int1D;
typedef vector<int1D> int2D;
int h, w, py, px, ans = 0;
int2D coords = {
	{ -1, -1 }, {  0, -1 }, {  1, -1 },
	{ -1,  0 },             {  1,  0 },
	{ -1,  1 }, {  0,  1 }, {  1,  1 }
};

bool dfs(int2D &grid, int x, int y) {
	if (!grid[y][x]) return false;
	grid[y][x]--;

	for (auto p: coords) {
		px = x + p[0], py = y + p[1];
		if (px < 0 || px >= w || py < 0 || py >= h || !grid[py][px]) continue;
		dfs(grid, px, py);
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> h >> w;
	int2D ns(h, int1D(w, 0));

	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			cin >> ns[y][x];
			ns[y][x] = ns[y][x] > 0;
		}
	}

	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			if (dfs(ns, x, y)) ans++;
		}
	}
	cout << ans << endl;
}
