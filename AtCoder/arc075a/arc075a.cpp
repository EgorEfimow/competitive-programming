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
    vi v;

    int s = 0;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        s += q;
        if (q % 10) v.push_back(q);
    }

    sort(all(v));
    if (s % 10 == 0) {
        if (isz(v) == 0) 
            cout << 0 << en;
        else 
            cout << s - v[0] << en;
        return;
    }
    cout << s << en;
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