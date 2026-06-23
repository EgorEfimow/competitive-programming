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
    ll x; cin >> x;

    for (ll n = 1; n <= x; ++n) {
        if (n == 1) cout << 0 << en;
        else if (n == 2) cout << 6 << en;
        else if (n == 3) cout << 28 << en;
        else if (n == 4) cout << 96 << en;
        else {
            ll s = n * n;
            ll squares = 2ll * (s - 3ll);
            ll l1 = 4ll * (s - 4ll) + 2ll * (s - 5ll) * (n - 4ll); 
            ll l2 = 2ll * (s - 5ll) + 2ll * (s - 7ll) * (n - 4ll);  
            ll other = ((s - 9ll) * (n - 4ll) * (n - 4ll)) / 2;
            cout << squares + l1 + l2 + other << en;
        }
    }
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
