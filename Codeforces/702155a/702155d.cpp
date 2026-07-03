
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
    vi target = {3, 1, 2, 1, 0, 1};
    vi arr(6);
    
    int n; cin >> n;
    vi v(n); cin >> v;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        bool f = true;
        ans++;
        if (v[i] > 5) continue;
        arr[v[i]]++;
        for (int j = 0; j < isz(target); ++j) {
            if (arr[j] < target[j]) {
                f = false;
                break;
            }
        }
        if (f) {
            cout << ans << en;
            return;
        }
    }
    cout << 0 << en;
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
