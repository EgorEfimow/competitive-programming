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
    ll n, m; cin >> n >> m;

    vector<char> used(n, 0);

    map<ll, vll> mp;

    mp[0] = {};

    for (int i = 0; i < m; ++i) {
        ll a, b; cin >> a >> b;
        a--; b--;
        mp[a].push_back(b);
    }

    ll ans = 1;

    queue<ll> q;
    q.push(0);
    used[0] = 1;
    while (!q.empty()) {
        ll top = q.front();
        q.pop();
        for (auto &e: mp[top]) {
            if (!used[e]) {
                q.push(e);
                used[e] = 1;
                ans++;
            }
        }
    }
    cout << ans << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}