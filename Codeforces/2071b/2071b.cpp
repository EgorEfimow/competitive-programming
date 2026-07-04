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
    int n; cin >> n;

    if (n == 1) {
        cout << -1 << en;
        return;
    }

    auto check = [](const ll val) -> bool {
        // ll pw = 1;
        // while (pw * pw < val) {
        //     pw++;
        // }
        // if (pw * pw == val)
        //     return true;
        // return false;
        return (ll)(sqrt(val)) * (ll)(sqrt(val)) == val;
    };
    
    vi v(n);
    iota(all(v), 1);
    ll sum = accumulate(all(v), 0ll);
    
    if (check(sum)) {
        cout << -1 << en;
        return;
    }

    ll accum = 0;
    for (int i = 0; i < n - 1; ++i) {
        accum += v[i];
        if (check(accum)) {
            swap(v[i], v[i + 1]);
            accum -= v[i + 1];
            accum += v[i];
        }
    }
    
    cout << v << en;
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
