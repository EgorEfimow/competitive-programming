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

ll slow(int q, int w, int e, int n) {
    ll ans = 0;
    for (int i = 0; i < 3001; ++i) {
        for (int j = 0; j < 3001; ++j) {
            for (int k = 0; k < 3001; ++k)
                if (i * q + j * w + k * e == n) ans++;
        }
    }
    return ans;
}

void solve() {
    ll r, g, b, n;
    cin >> r >> g >> b >> n;

    ll ans = 0;
    for (int i = 0; i < 3001; ++i) {
        for (int j = 0; j < 3001; ++j) {
            if (n >= (i * r + j * g) && (n - (i * r + j * g)) % b == 0) ans++;
        }
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