#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n; cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        mp[v - 1]++; mp[v]++; mp[v + 1]++;
    }
    int ans = 0;
    for (auto &[k, v] : mp)
        ans = max(ans, v);

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