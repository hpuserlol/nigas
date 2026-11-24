#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "../algo/debug.h"
#else
#define debug(...) 42
#endif
vector <int> a;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    a.resize(n+1);
    for(int i = 1; i <= n; i++){ 
      cin >> a[i];
    }
    int ans = 0, l = 1;
    long long cur = 0;
    for(int r = 1; r <= n; r++){
      cur += a[r];
      if(cur > k){
        cur -= a[l];
        l++;
      }
      ans = max(ans, r - l + 1);
    }
    cout << ans;
  }
  return 0;
}