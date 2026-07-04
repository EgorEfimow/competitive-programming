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
    ll health_hero, dmg_hero; cin >> health_hero >> dmg_hero;
    ll health_mtr, dmg_mtr; cin >> health_mtr >> dmg_mtr;

    ll k, w, a; cin >> k >> w >> a;

    for (int i = 0; i <= k; ++i) {
        ll cnt_w = i;
        ll cnt_a = k - i;
        ll tmp_dmg_hero = dmg_hero + w * cnt_w;
        ll tmp_health_hero = health_hero + a * cnt_a;

        if ((health_mtr + (tmp_dmg_hero - 1ll)) / tmp_dmg_hero <= (tmp_health_hero + (dmg_mtr - 1ll)) / dmg_mtr) {
            cout << "yes" << en;
            return;
        }
    }
    
    cout << "no" << en;
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
