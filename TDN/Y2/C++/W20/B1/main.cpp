#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll d, m, y; string s;

map<int, int> m1 = { {1, 31}, {2, 28}, {3, 31}, {4, 30}, {5, 31}, {6, 30},
					{7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31} };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> s;
	string ss = s;
	reverse(ss.begin(), ss.end());
	y = (ss[1] - '0') * 10 + (ss[0] - '0');

	if (s.length() == 4) {
		d = s[0] - '0', m = s[1] - '0';
		cout << d << "/" << m << "/" << y << endl;
		return 0;
	}
	else {
		d = (s[1] - '0') * 10 + (s[0] - '0');
		m = s[2] - '0';
		if (m1[m] >= d) {
			cout << d << "/" << m << "/" << y << endl;
			return 0;
		}
		else {
			d = s[0] - '0';
			m = (s[2] - '0') * 10 + (s[1] - '0');
			if (m1[m] >= d || (m == 2 && d <= 29 && y % 4 == 0 && y != 0)) {
				cout << d << "/" << m << "/" << y << endl;
				return 0;
			}
			else cout << "KHONG TAO DUOC" << endl;
		}
	}
}
