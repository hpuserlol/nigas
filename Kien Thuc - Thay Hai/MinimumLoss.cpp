#include <bits/stdc++.h>
using namespace std;

#define fast_io                             \
        ios_base::sync_with_stdio(false);   \
        cin.tie(NULL);

int main () {
    fast_io;

    int n;
    cin >> n;
    vector <long long> p;
    set <long long> mySet;
    p.resize(n+5);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    long long ans = 1000000000000000007LL;

    for (int i = 1; i <= n; i++) {
        set <long long>::iterator it = mySet.upper_bound(p[i]);
        if (it != mySet.end()) {
            long long lastPrice = *it;
            if (lastPrice > p[i]) {
                ans = min(ans, lastPrice - p[i]);
            }
        }
        mySet.insert(p[i]);
    }

    cout << ans;

    return 0;
}
