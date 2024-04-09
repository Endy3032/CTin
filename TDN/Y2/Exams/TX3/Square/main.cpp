#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, xmn = 200, xmx = -1, ymn = 200, ymx = -1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<pair<int, int>> points(n);
	for (auto &point: points) {
		cin >> point.first >> point.second;
		xmn = min(xmn, point.first);
		xmx = max(xmx, point.first);
		ymn = min(ymn, point.second);
		ymx = max(ymx, point.second);
	}

	int side = max(xmx - xmn, ymx - ymn);
	cout << side * side << endl;
}
