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
    int q; cin >> q;
    vector<int> ans;

    int st, sm = -1;
    bool f = false;
    for (int i = 0; i < q; ++i) {
        int v; cin >> v;
        if (ans.empty()) {
            cout << 1;
            ans.pb(v);
            st = v;
            continue;
        }
        if (v >= ans.back() && !f) {
            cout << 1;
            ans.pb(v);

        }
        else if (v <= st && v >= sm) {
            sm = v;
            cout << 1;
            ans.pb(v);
            f = true;
        }
        else
            cout << 0;
    }
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