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
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        int v; cin >> v;
        mp[v]++;
    }

    int mi = mp.begin()->first, ma = mp.rbegin()->first;

    if (mi == ma) cout << 1ll * (mp.begin()->second) * ((mp.begin()->second) - 1) << en;
    else
        cout << 2ll * mp.begin()->second * mp.rbegin()->second << en;
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