#include <bits/stdc++.h>

using namespace std;

#define task "GRID"

char a[1005][1005], b[1005][1005];

void solve() {
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    int p, q;
    cin >> p >> q;
    for (int i = 1; i <= p; ++i)
        for (int j = 1; j <= q; ++j)
            cin >> b[i][j];
    bool found = false;
    for (int i = 1; i <= m - p + 1; ++i) {
        for (int j = 1; j <= n - q + 1; ++j) {
            bool ok = true;
            for (int k = 1; k <= p; ++k) {
                for (int l = 1; l <= q; ++l) {
                    if (a[i + k - 1][j + l - 1] != b[k][l]) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }
            if (ok) {
                found = true;
                break;
            }
        }
        if (found) break;
    }
    cout << (found ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    if (fopen(task ".INP", "r")) {
        freopen(task ".INP", "r", stdin);
        freopen(task ".OUT", "w", stdout);
    }

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
