#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n, c = 0, cl = 0, cr = 0, cc = 0;
char chr;
string s;

void clearOuter(string &str, char chr, int &count) {
	int index = 0;
	while (str[index] == '.' && index < str.length()) index++;
	if (str[index] == chr) {
		str.erase(0, index + 1);
		clearOuter(str, chr, count);
	}
	else {
		count = index;
		str.erase(0, index);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> s;

	clearOuter(s, 'L', cl);
	reverse(s.begin(), s.end());
	clearOuter(s, 'R', cr);
	reverse(s.begin(), s.end());

	c = cl + cr;

	int i = 0;
	while (i < s.length()) {
		if (s[i] == 'R') {
			cc = 0;
		}
		else if (s[i] == '.') {
			cc++;
		}
		else if (s[i] == 'L') {
			c += cc % 2;
			s.erase(0, 1);
			clearOuter(s, 'L', cc);
			cc = 0;
		}
		i++;
	}

	cout << c << endl;
}
