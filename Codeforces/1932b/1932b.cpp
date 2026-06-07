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
    ll n; cin >> n;
    vll v(n); for (ll &e : v) cin >> e;

    ll year = v[0];

    for (int i = 1; i < n; ++i) {
        if (v[i] <= year) {
            v[i] *= (year / v[i]) + 1;
        }
        year = v[i];
    }

    cout << v.back() << en;
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