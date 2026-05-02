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

const int MOD = 998244353;

void solve() {
    string s; cin >> s;

    int pos = 0;
    int len = 1;
    ll ans = 0;
    while (pos < isz(s)) {
        while (pos + 1 < isz(s) && s[pos + 1] != s[pos]) {
            pos++;
            len++;
        }
        ll q = len + 1;
        if (len % 2) q /= 2;
        else len /= 2;
        ans += q * len % MOD;
        len = 1;
        pos++;
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