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
    ll n; cin >> n;
    ll mir = 1e18, mic = 1e18, sr = 0, sc = 0;

    for (int i = 0; i < n; ++i) {
        ll q; cin >> q;
        sr += q;
        mir = min(mir, q);
    }

    for (int i = 0; i < n; ++i) {
        ll q; cin >> q;
        sc += q;
        mic = min(mic, q);
    }

    cout << min(n * mir + sc, n * mic + sr) << en;
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