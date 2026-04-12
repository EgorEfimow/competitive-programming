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
    vi v(n);
    for (int &e : v) cin >> e;

    int cnt = 0;
    vi ans;
    for (int i = 1; i < n; ++i) {
        if (v[i] <= v[i - 1]) {
            cnt++; 
            ans.pb(v[i - 1]);
        }
    }
    cnt++;
    ans.pb(v.back());
    cout << cnt << en;
    for (int &e : ans) cout << e << " ";
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