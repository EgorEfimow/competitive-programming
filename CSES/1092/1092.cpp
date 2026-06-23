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
    ll n; cin >> n;

    ll sum = ((n + 1) * n) / 2;
    
    if (sum % 2) {
        cout << "NO" << en;
        return;
    }

    vi v(n);
    iota(all(v), 1);

    vi v1, v2;
    set<int> idx;

    ll cur_s = 0, target = sum / 2;
    for (int i = n - 1; i >= 0; --i) {
        if (cur_s + v[i] > target) break;
        v1.push_back(v[i]);
        idx.insert(i);
        cur_s += v[i];
    }

    for (int i = 0; i < n; ++i) {
        if (cur_s + v[i] == target) {
            v1.push_back(v[i]);
            idx.insert(i);
            break;
        }
    }

    cout << "YES" << en;
    cout << isz(v1) << en;
    cout << v1 << en;

    for (int i = 0; i < n; ++i) {
        if (idx.find(i) == idx.end()) {
            v2.push_back(v[i]);
        }
    }

    cout << isz(v2) << en;
    cout << v2 << en;
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
