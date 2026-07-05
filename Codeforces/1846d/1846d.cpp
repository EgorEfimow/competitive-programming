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

void solve() {
    ll n, d, h; cin >> n >> d >> h;
    vll v(n); cin >> v;

    auto area = [](const ll d, const ll h) -> ll {
        return d * h;  
    };

    double ans = 0;
    double ctg_theta = (d / 2.0) / h;

    for (int i = 1; i < n; ++i) {
        ll diff = v[i] - v[i - 1];
        if (diff >= h) {
            ans += area(d, h);
            continue;
        }
        ans += (diff * (d + 2 * ((d / 2.0) - ctg_theta * diff)));
    }
    ans += area(d, h);
    cout << fixed << setprecision(16) << ans / 2.0 << en;
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
