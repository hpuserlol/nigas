

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