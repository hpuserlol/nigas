#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define task "MOLECULAR"

void solve() {
    string s;
    cin >> s;
    stack<ll> st;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'H')
            st.push(1);
        else if (s[i] == 'O')
            st.push(16);
        else if (s[i] == 'N')
            st.push(14);
        else if (s[i] == 'C')
            st.push(12);
        else {
            ll x = st.top();
            st.pop();
            st.push(x * (s[i] - '0'));
        }
    }
    ll ans = 0;
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    cout << ans;
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
