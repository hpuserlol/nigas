#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())
#define task ""

void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> fence;
    fence.resize(n+5);
    for(int i = 1; i <= n; i++){
        cin >> fence[i];
    }
    int cursum = 0;
    for(int i = 1; i <= k; i++){
        cursum += fence[i];
    }
    int ans = 1, minsum = cursum;
    for(int i = k + 1; i <= n; i++){
        cursum = cursum + fence[i] + fence[i-k];
        if(cursum < minsum){
            minsum = cursum;
            ans = i - k + 1;
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    if (fopen(task ".inp", "r")) {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}