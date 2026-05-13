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
    int ans = 0, left, right, n, a; cin >> n >> a;
    vector<char> v(n, 0);
    for (char &e : v) cin >> e;

    auto expand = [&](const int start) {
        int l = start, r = start;
        int radius = 0, ans = 0;

        while (l - radius >= 0 && r + radius < n) {
            if (v[l - radius] == v[r + radius] && v[l - radius] == '1')
                ans += (radius == 0) ? 1 : 2;

            radius++;
        }
        return tuple{ans, l - radius, r + radius};
    };

    auto result = expand(a - 1);
    ans = get<0>(result);
    left = get<1>(result);
    right = get<2>(result);

    if (right == n) {
        for (int i = 0; i <= left; ++i) 
            if (v[i] == '1') ans++;
        cout << ans << en;
        return;
    }
    if (left == -1) {
        for (int i = right; i < n; ++i) 
            if (v[i] == '1') ans++;
        cout << ans << en;
        return;
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