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
    // vi v(n);

    ll s = 0, ans = 0;
    char found = 0;
    int q;
    for (int i = 0; i < n; ++i) {
        cin >> q;
        if (q == 0 && !found) continue;
        if (q == 0 && found) ans++;
        if (q != 0) found = 1;
        s += q;
    }

    if (s == 0) {
        cout << 0 << en;
        return;
    }

    if (q == 0) ans--;
    else ans -= q;

    cout << ans + s << en;
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