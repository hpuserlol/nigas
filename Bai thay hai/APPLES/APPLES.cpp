#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define task "APPLES"

const ll INF = 1e18;

ll dp[100005], ndp[100005];
int c[100005];

void solve() {
    int n, m, a;
    cin >> n >> m >> a;
    for (int i = 1; i <= a; ++i)
        cin >> c[i];
    int sz = n - m + 1;
    for (int j = 1; j <= sz; ++j)
        dp[j] = INF;
    dp[1] = 0;
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= sz; ++j)
            ndp[j] = INF;
        for (int j = 1; j <= sz; ++j) {
            if (j <= c[i] && c[i] <= j + m - 1) {
                for (int k = 1; k <= sz; ++k) {
                    if (dp[k] == INF) continue;
                    ndp[j] = min(ndp[j], dp[k] + abs(j - k));
                }
            }
        }
        for (int j = 1; j <= sz; ++j)
            dp[j] = ndp[j];
    }
    ll ans = INF;

    for (int j = 1; j <= sz; ++j)
        ans = min(ans, dp[j]);
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    if (fopen(task ".INP", "r")) {
        freopen(task ".INP", "r", stdin);
        freopen(task ".OUT", "w", stdout);
    }
    solve();
    return 0;
}