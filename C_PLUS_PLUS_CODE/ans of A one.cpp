#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = (int)1e5 + 9;
int n, q, a[N], s;

int main() {
	
	cin >> n >> q;
	for (int i = 1; i <= n; ++i) cin >> a[i], s += a[i];

	int t, x;
	while (q-- > 0) {
		cin >> t >> x;
		if (t == 1) {
			if (a[x] == 1) --s, --a[x];
			else ++s, ++a[x];
		}
		else {
			cout << (x <= s ? 1 : 0) << '\n';
		}
	}
}

