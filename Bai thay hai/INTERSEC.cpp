
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("INTERSEC.INP", "r", stdin);
    freopen("INTERSEC.OUT", "w", stdout);

    int n;
    cin >> n;

    while (n--) {
        long long x1, y1, x2, y2;
        long long x3, y3, x4, y4;

        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;

        long long l1 = min(x1, x2);
        long long r1 = max(x1, x2);
        long long b1 = min(y1, y2);
        long long t1 = max(y1, y2);

        long long l2 = min(x3, x4);
        long long r2 = max(x3, x4);
        long long b2 = min(y3, y4);
        long long t2 = max(y3, y4);

        long long l = max(l1, l2);
        long long r = min(r1, r2);
        long long b = max(b1, b2);
        long long t = min(t1, t2);

        if (l >= r || b >= t)
            cout << 0 << '\n';
        else
            cout << (r - l) * (t - b) << '\n';
    }
    return 0;
}
