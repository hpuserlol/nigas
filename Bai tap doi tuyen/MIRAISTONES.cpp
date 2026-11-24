#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define all(x) (x).begin() + 1, (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())
#define task ""

vector <int> a;
ll prefv[1000005];
ll prefu[1000005];
void solve() {
    int type, l, r;
    cin >> type >> l >> r;
    if(type == 1){
        cout << prefv[r] - prefv[l-1] << '\n';
    }
    else cout << prefu[r] - prefu[l-1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int cbd;

    if (fopen(task ".inp", "r")) {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }

    int n;
    cin >> n;
    a.resize(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    prefv[0] = 0;
    for(int i = 1; i <= n; i++){
        prefv[i] = prefv[i-1] + a[i];
    }
    sort(all(a));
    prefu[0] = 0;
    for(int i = 1; i <= n; i++){
        prefu[i] = prefu[i-1] + a[i];
    }

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}