#include <bits/stdc++.h>
using namespace std;

ifstream inp("CNTCHAR.inp");
ofstream out("CNTCHAR.out");
#define cin inp
#define cout out

typedef long long ll;
vector<ll> chr(26);
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> s;
	for (ll i = 0; i < s.size(); i++) chr[s[i] - 'a']++;

	for (ll i = 0; i < chr.size(); i++) {
		if (chr[i] == 0) continue;
		cout << char(i + 'a') << ":" << chr[i] << endl;
	}
}
