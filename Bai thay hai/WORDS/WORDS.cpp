#include <bits/stdc++.h>

using namespace std;

#define task "WORDS"

void solve() {
    string s;
    getline(cin, s);
    int cnt = 0, cur = 0, ans = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            ++cur;
        }
        else {
            if (cur > 0) {
                ++cnt;
                ans = max(ans, cur);
                cur = 0;
            }
        }
    }
    if (cur > 0) {
        ++cnt;
        ans = max(ans, cur);
    }

    cout << cnt << " " << ans;
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
