#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> st0, st1;
    vector<int> ans(n);
    int total_subseq = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            if (!st1.empty()) {
                int id = st1.back();
                st1.pop_back();
                ans[i] = id;
                st0.push_back(id);
            } else {
                ++total_subseq;
                ans[i] = total_subseq;
                st0.push_back(total_subseq);
            }
        } else {
            if (!st0.empty()) {
                int id = st0.back();
                st0.pop_back();
                ans[i] = id;
                st1.push_back(id);
            } else {
                ++total_subseq;
                ans[i] = total_subseq;
                st1.push_back(total_subseq);
            }
        }
    }
    cout << total_subseq << "\n";
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
