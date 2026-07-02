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
    ll ans = 0;
    int n; cin >> n;
    vi v(n); cin >> v;

    if (n == 1) {
        cout << 0 << en;
        return;
    }
    if (n == 2) {
        cout << (((7 - v[0]) == v[1]) || (v[0] == (7 - v[1])) || v[0] == v[1]) << en;
        return;
    }
    if (n == 3) {
        bool left = (((7 - v[0]) == v[1]) || (v[0] == (7 - v[1])) || v[0] == v[1]);
        bool right = (((7 - v[2]) == v[1]) || (v[2] == (7 - v[1])) || v[2] == v[1]);
        cout << (left || right) << en;
        return;
    }
    
    vpii vp(n - 2);
    for (int i = 1; i < n - 1; ++i) {
        vp[i - 1].first = (((7 - v[i - 1]) == v[i]) || (v[i - 1] == (7 - v[i])) || v[i - 1] == v[i]);
        vp[i - 1].second = (((7 - v[i + 1]) == v[i]) || (v[i + 1] == (7 - v[i])) || v[i + 1] == v[i]);
    }

    if (vp[0].first == 1 && vp[0].second == 1) {
        vp[0].first = 0;
        vp[0].second = 0;
        vp[1].first = 0;
        ans++;
    }
    if (vp.back().first == 1 && vp.back().second == 1) {
        vp.back().first = 0;
        vp.back().second = 0;
        vp[isz(vp) - 2].second = 0;
        ans++;
    }
    
    // remove with 2 bad neighbors
    for (int i = 1; i < isz(vp) - 1; ++i) {
        int l = vp[i].first, r = vp[i].second;
        if (l == 1 && r == 1) {
            vp[i].first = 0;
            vp[i].second = 0;
            vp[i - 1].second = 0;
            vp[i + 1].first = 0;
            ans++;
        }
    }

    bool left = (vp[0].first == 1), right = (vp.back().second == 1);

    ans += left; ans += right;

    int cnt1 = 0;
    
    for (int i = left; i < isz(vp) - right; ++i) {
        cnt1 += (vp[i].first == 1 || vp[i].second == 1);
    }

    ans += cnt1 / 2;
    
    cout << ans << en;    
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
