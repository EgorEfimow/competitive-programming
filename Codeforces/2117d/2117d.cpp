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
    vll v(n); cin >> v;

    if (!is_sorted(all(v), less<>()) && !is_sorted(all(v), greater<>())) {
        cout << "no" << en;
        return;
    }

    // check if progression
    if (v.back() < v[0]) reverse(all(v));

    int d = v[1] - v[0];

    for (int i = 2; i < n; ++i) {
        if (v[i] - v[i - 1] != d) {
            cout << "no" << en;
            return;
        }
    }

    if (v[0] - d < 0 || (v[0] - d) % (n + 1)) {
        cout << "no" << en;
        return;
    }
    
    cout << "yes" << en;
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
