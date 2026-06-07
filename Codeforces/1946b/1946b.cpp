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
#define vpii vector<pii>

const ll MOD = 1E9+7;

ll modulo(ll value) {
    return ((value % MOD) + MOD) % MOD;
}

void solve() {
    int n, k; cin >> n >> k;
    ll sum = 0, cnt_pos = 0;
    vll v(n); for (ll &e : v) {
        cin >> e;
        if (e > 0) cnt_pos++;
        sum = modulo(sum + e);
    }

    if (cnt_pos == 0) {
        cout << sum << en;
        return;
    }

    vll pref(n + 1);

    pref[0] = v[0];
    for (int i = 1; i < isz(v); ++i) {
        pref[i] = max(pref[i - 1] + v[i], v[i]);
    }

    ll st = *max_element(all(pref));

    for (int i = 0; i < k; ++i) {
        sum = modulo(sum + st);
        st = modulo(st * 2ll);
    }

    cout << sum << en;
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