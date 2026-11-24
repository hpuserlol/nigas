#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define task "TPATH"

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}
void solve() {
    int n, k;
    cin >> n >> k;
    vector <pair<int,int>> a;
    a.resize(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    multiset <int> giamkhao;
    for(int i = 1; i <= k; i++){
        giamkhao.insert(0);
    }
    int answer = 0;
    for(int i = 1; i <= n; i++){
        auto it = giamkhao.upper_bound(a[i].first);
        if(it != giamkhao.begin()){
            answer++;
            it--;
            giamkhao.erase(it);
            giamkhao.insert(a[i].second);
        }
    }
    cout << answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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