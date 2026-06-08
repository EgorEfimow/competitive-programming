#include <algorithm>
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

void solve() {
    ll n, l, r; cin >> n >> l >> r;
    l--; r--;
    vll v(n); for (ll &e : v) cin >> e;


    vi left, right;
    vi rng(v.begin() + l, v.begin() + r + 1);
    for (int i = 0; i < l; ++i) left.pb(v[i]);
    for (int i = r + 1; i < n; ++i) right.pb(v[i]);

    sort(all(left));
    sort(all(right));
    sort(all(rng), greater<int>());

    left.pb(1e9 + 1);
    right.pb(1e9 + 1);

    auto check = [&](const vi &arr) -> ll {
        ll sum = 0;
        int i = 0, j = 0;
        for (int pos = 0; pos < n && i < isz(rng); ++pos) { 
            if (arr[j] < rng[i]) {
                sum += arr[j];
                j++;
                i++;
                continue;
            }
            sum += rng[i];
            i++;
        }
        return sum;
    };

    cout << min(check(right), check(left)) << en;
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