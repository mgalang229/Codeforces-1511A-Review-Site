#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int r;
			cin >> r;
			// count the occurrences of 1 and 3 in the sequence
			if (r == 1 || r == 3) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
