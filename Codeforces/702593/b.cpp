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
    vi v(n); cin >> v;

    int ma = *max_element(all(v));

    vi tmp(all(v));
    sort(all(tmp));

    int g = tmp[0];
    for (int i = 1; i < n - 1; ++i) {
        g = gcd(g, tmp[i]);
    }
    if (g == ma) {
        cout << "no" << en;
    }
    else {
        cout << "yes" << en;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i] == ma && cnt == 0) {
                cnt = 1;
                cout << "2 ";
                continue;
            }
            cout << "1 ";
        }
        cout << en;
    }
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

