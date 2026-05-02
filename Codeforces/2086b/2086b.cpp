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

bool check(ll ts, vll &a, ll R, ll L, ll THRESH) {
    ll inner = (R - L) / isz(a);

    ll sum = inner * ts;

    for (int i = 0; i < (R - L) % isz(a); ++i) {
        sum += a[isz(a) - 1 - i];
    }

    return (sum >= THRESH);
}

ll bs(ll ts, vll &a, ll THRESH, ll L, ll k, ll n) {
    ll lo = L, hi = k * n + 1;

    while (lo < hi - 1) {
        ll mi = (lo + hi) / 2;
        if (check(ts, a, n * k + 1, mi, THRESH)) {
            lo = mi;
        }
        else 
            hi = mi;
    }
    return lo;
}

void solve() {
    ll n, k, x; cin >> n >> k >> x;

    vll a(n);
    for (ll &e : a) cin >> e;

    cout << bs(accumulate(all(a), 0ll), a, x, 0, k, n) << en;
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