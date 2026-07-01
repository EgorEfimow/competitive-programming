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
    int c0_1, c1_1, c2_1; cin >> c0_1 >> c1_1 >> c2_1;
    int c0_2, c1_2, c2_2; cin >> c0_2 >> c1_2 >> c2_2;

    ll ans = 0;
    
    ll cnt1 = min(c2_1, c1_2); // match 2 from string A with 1 from B
    c2_1 -= cnt1; c1_2 -= cnt1;
    ans += cnt1 * 2;

    ll cnt2 = min(c0_1, c2_2); // match 0 from string A with 2 from B
    c0_1 -= cnt2; c2_2 -= cnt2;

    ll cnt3 = min(c2_1, c2_2); // match remaining 2's from both strings
    c2_1 -= cnt3; c2_2 -= cnt3;

    ll cnt4 = min(c2_1, c0_2); // match 0 from string B with 2 from A
    c2_1 -= cnt4; c0_2 -= cnt4;

    ll s1 = c0_1 + c1_1, s2 = c0_2 + c1_2;
    ll cnt5 = min(s1, s2); // match 1 to 1 and 1 to 0 and 0 to 1
    s1 -= cnt5;
    
    ll s = s1 + c2_1;
    if (s != 0) {
        ans -= s * 2;
    }
    
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
