
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define task "ODDONE"

ll a[100005], pre[100005], suf[100005];

ll ucln(ll a, ll b) {
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    if (n == 1) {
        cout << a[1] + 1;
        return;
    }
    pre[0] = 0;
    for (int i = 1; i <= n; ++i)
        pre[i] = ucln(pre[i-1], a[i]);
    suf[n+1] = 0;
    for (int i = n; i >= 1; --i)
        suf[i] = ucln(suf[i+1], a[i]);
    for (int i = 1; i <= n; ++i) {
        ll x = ucln(pre[i-1], suf[i+1]);

        if (a[i] % x != 0) {
            cout << x << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    if (fopen(task ".INP", "r")) {
        freopen(task ".INP", "r", stdin);
        freopen(task ".OUT", "w", stdout);
    }

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
