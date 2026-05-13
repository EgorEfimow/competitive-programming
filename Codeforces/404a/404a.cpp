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
    vector<string> v(n);
    for (string &e : v) cin >> e;
    unordered_set<char> st;

    string m = "", p = "";


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && n - i - 1 != j) st.insert(v[i][j]);
            else {
                if (i == j) m.pb(v[i][j]);
                if (n - i - 1 == j) p.pb(v[i][j]);
            }
        }
    }

    if (m == p && isz(set(all(m))) == 1 && isz(st) == 1 && *st.begin() != m[0]) 
        cout << "YES" << en;
    else cout << "NO" << en;
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