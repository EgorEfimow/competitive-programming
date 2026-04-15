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
    vector<pii> v(n);
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        v[i % n].first = q;
    }
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        v[i % n].second = q;
    }
    sort(all(v), [&](auto l, auto r) {
        return l.first < r.first;
    });

    for (int i = 0; i < n; ++i) 
        cout << v[i].first << " ";
    cout << en;
    for (int i = 0; i < n; ++i) 
        cout << v[i].second << " ";
    cout << en;
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