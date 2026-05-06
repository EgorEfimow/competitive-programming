#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    ll n;
    cin >> n;
    
    map<int, int> cnt;
    ll ma = -1;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        ma = max(ma, (ll)x);
    }
    
    ll ans = ma * n; 
    
    vi opt;
    opt.pb(ma);
    cnt[ma]--;
    
    int nxt = 0;
    while (cnt[nxt] > 0) {
        opt.pb(nxt);
        cnt[nxt]--;
        nxt++;
    }

    int mex = 0;
    vi seen(n + 2, 0); 
    
    for (int x : opt) {
        if (x <= n + 1) seen[x] = 1; 
        while (seen[mex]) {
            mex++;
        }
        ans += mex;
    }
    
    int left = n - isz(opt);
    ans += 1ll * left * mex;
    
    cout << ans << en;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}