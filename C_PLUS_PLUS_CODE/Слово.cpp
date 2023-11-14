#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
#include <chrono>
#include <random>
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
int Rand(int l, int r) {
    return uniform_int_distribution<int>(l, r) (rd);
}
const int N = 1e5 + 9, S = 1006, mod1 = Rand(1e9 + 2277, 1e9 + 5277), mod2 = Rand(1e9 + 8277, 1e9 + 9277);
int n, s, a[N], dp1[S], dp2[S];

void add(int x) {
    for (int i = s; i >= x; --i) {
        dp1[i] += dp1[i - x];
        dp2[i] += dp2[i - x];
        if (dp1[i] >= mod1) dp1[i] -= mod1;
        if (dp2[i] >= mod2) dp2[i] -= mod2;
    }
}

void delet(int x) {
    for (int i = x; i <= s; ++i) {
        dp1[i] -= dp1[i - x];
        dp2[i] -= dp2[i - x];
        if (dp1[i] < 0) dp1[i] += mod1;
        if (dp2[i] < 0) dp2[i] += mod2;
    }
}

int main() {
    
    cin >> n >> s;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    dp1[0] = 1;
    int ans = n + 1;
    for (int l = 1, r = 1; r <= n; ++r) {
        add(a[r]);
        while (dp1[s] > 0 || dp2[s] > 0) {
            ans = min(ans, r - l + 1);
            delet(a[l++]);
        }
    }
    cout << (ans == n + 1 ? -1 : ans);
}

