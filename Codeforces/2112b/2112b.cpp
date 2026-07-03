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

    // define if initially good
    for (int i = 1; i < isz(v); ++i) {
        int val = abs(v[i] - v[i - 1]);
        if (val == 0 || val == 1) {
            cout << 0 << en;
            return;
        }
    }

    auto check = [](const vi &arr) -> bool {
        for (int i = 0; i < isz(arr) - 2; ++i)   {
            int mi = min(arr[i + 1], arr[i + 2]);
            int ma = max(arr[i + 1], arr[i + 2]);
            if (arr[i] >= mi - 1 && arr[i] <= ma + 1)
                return true;
        }
        return false;
    };

    vi tmp(all(v));
    reverse(all(tmp));

    if (check(v) || check(tmp)) {
        cout << 1 << en;
    }
    else cout << -1 << en;
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
