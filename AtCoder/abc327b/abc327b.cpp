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
    ll b; cin >> b;

    auto pw = [&](const ll v) -> ll {
        ll res = 1;
        for (int i = 0; i < v; ++i) res *= v;
        return res;
    };

    for (ll i = 1; i < 16; ++i) {
        if (pw(i) == b) {
            cout << i << en;
            return;
        }
    }
    cout << -1 << en;
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