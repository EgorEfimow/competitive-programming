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
    vector<pii> v;
    set<pii> st;

    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        v.emplace_back(x, y);
        st.insert({x, y});
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        bool u = 0, r = 0, b = 0, l = 0;
        for (int j = 1; j < 2001; ++j) {
            u += st.find({v[i].first, v[i].second + j}) != st.end();
            b += st.find({v[i].first, v[i].second - j}) != st.end();
            r += st.find({v[i].first + j, v[i].second}) != st.end();
            l += st.find({v[i].first - j, v[i].second}) != st.end();
        }
        if (u && b && r && l) ans++;
    }
    cout << ans << en;
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