#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int g1, s1, b1;
		cin >> g1 >> s1 >> b1;
		int g2, s2, b2;
		cin >> g2 >> s2 >> b2;
		// compare the larger sum
		if (g1 + s1 + b1 > g2 + s2 + b2) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << '\n';
	}
	return 0;
}
