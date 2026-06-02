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
    ll n, ans = 0; cin >> n;
    vll v(n);
    for (ll &e : v) cin >> e;

    map<ll, vector<ll>> mp;
    
    ll left_max = v[0], cnt = 0;
    for (int i = 1; i < isz(v); ++i) {
        if (v[i] < left_max) {
            mp[left_max - v[i]].pb(v[i]);
            cnt++;
            continue;
        }
        left_max = max(v[i], left_max);
    }

    ll add = 0;
    while (!mp.empty()) {
        ans += (cnt + 1) * (mp.begin()->first - add);
        add += (mp.begin()->first - add);
        cnt -= isz(mp.begin()->second);
        mp.erase(mp.begin()->first);
    }
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