#include <algorithm>
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
    vpii v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].second >> v[i].first;
    }

    int right_mx = v.back().second;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i].second < right_mx)
            v[i].second = right_mx;
        else
            right_mx = v[i].second;
    }

    vi tmp(n);
    for (int i = 0; i < n; ++i)
        tmp[i] = v[i].first;
 
    int q; cin >> q;
   
    for (int i = 0; i < q; ++i) {
        int val; cin >> val;
        auto it = upper_bound(all(tmp), val);
        int d = distance(tmp.begin(), it);

        cout << v[d].second << en;
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
