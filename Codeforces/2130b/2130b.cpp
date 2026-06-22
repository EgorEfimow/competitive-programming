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
    int n, s; cin >> n >> s;
    vi v(n); cin >> v;

    int cnt1 = 0, cnt2 = 0;
    for (int &e : v) {
        cnt1 += e == 1;
        cnt2 += e == 2;
    }

    int sum = accumulate(all(v), 0);
    if (sum > s) {
        cout << v << en;
    }
    else if (sum == s) {
        cout << -1 << en;
    }
    else {
        sort(all(v));
        auto it = lower_bound(all(v), 1);
        sort(it, v.end(), greater<>());
        int d = s - sum;
        if (d == 1) cout << v << en;
        else cout << -1 << en;
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
