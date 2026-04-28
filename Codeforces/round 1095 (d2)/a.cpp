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

const int MOD = 676767677;

void solve() {
    int n; cin >> n;
    vll v(n);

    for (auto &e : v) cin >> e;

    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] != 1) {
            ans += v[i];
            continue;
        }
        bool f = false;
        for (int j = i + 1; j < n; ++j) {
            if (v[i] == 1 && v[j] != 1) {
                ans += v[j];
                i = j;
                f = 1;
                break;
            }
        }
        if (!f) {
            ans++;
            break;
        }
    }

    cout << ans % MOD << en;
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