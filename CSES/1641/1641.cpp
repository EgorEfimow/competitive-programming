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
    ll n, s; cin >> n >> s;
    vector<pair<ll, ll>> v;

    for (ll i = 0; i < n; ++i) {
        ll q; cin >> q;
        v.emplace_back(q, i + 1);
    }
    sort(all(v));

    for (int i = 0; i < n; ++i) {
        int l = i + 1, r = n - 1;
        int sum = s - v[i].first;
        
        while (l < r) {
            if (v[l].first + v[r].first > sum) r--;
            else if (v[l].first + v[r].first < sum) l++;
            else {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << en;
                return;
            }
        }
    }
    cout << "IMPOSSIBLE" << en;
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