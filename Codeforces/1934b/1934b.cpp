#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define en '\n'

using ll  = long long;
using pii = pair<int, int>;
using vi  = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vpii = vector<pii>;

template<typename T>
istream& operator>>(istream& in, vector<T>& a) {
    for (T& i : a) 
        in >> i;
    return in;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& a) {
    for (const auto& i : a) { 
        out << i << " ";
    }
    return out;
}

ll binpow(ll a, ll b, ll MOD) {
    a %= MOD;
    ll res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll dp[241];

void solve() {
    fill(dp, dp + 241, 1e9 + 1);
    ll n; cin >> n;
    ll ans = 0;
    if (n > 240)
        ans += (n - 240 + 14) / 15;

    vi steps = {1, 3, 6, 10, 15};

    for (int &step : steps)
        dp[step] = 1;

    for (int i = 1; i < 241; ++i) {
        if (dp[i] == 1) continue;
        for (int &step : steps) {
            if (i - step >= 1) {
                dp[i] = min(dp[i], dp[i - step] + 1);
            }
        }
    }
    cout << ans + dp[n - 15 * ans] << en;
    
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
