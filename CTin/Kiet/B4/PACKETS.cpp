#include <bits/stdc++.h>
using namespace std;

ifstream inp("PACKETS.inp");
ofstream out("PACKETS.out");

typedef long long ll;
vector<ll> parcelSize = {1, 2*2*2, 3*3*3, 4*4*4, 5*5*5, 6*6*6};

int main() {
	for (int i = 0; i < parcelSize.size(); i++) cout << parcelSize[i] << " ";
	cout << "\n";
}