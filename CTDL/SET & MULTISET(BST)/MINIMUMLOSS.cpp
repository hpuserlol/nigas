#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define task "TPATH"

void solve() {
    int n; 
    cin >> n;
    vector <ll> p;
    set <ll> mySet;
    p.resize(n+5);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    ll ans = 1000000000000000007LL;
    for(int i = 1; i <= n; i++){
        set <ll>::iterator it = mySet.upper_bound(p[i]);
        ll lastprice = *it;
        if(lastprice > p[i]){
            ans = min(ans,lastprice - p[i]);
        }
        mySet.insert(p[i]);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (fopen(task ".INP", "r")) {
        freopen(task ".INP", "r", stdin);
        freopen(task ".OUT", "w", stdout);
    }

    int t = 1;
    // cin >> t;5
    while (t--) {
        solve();
    }
    return 0;
}