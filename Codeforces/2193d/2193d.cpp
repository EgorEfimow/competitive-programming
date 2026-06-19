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
    vll v(n), b(n); cin >> v >> b;

    vll pref(n + 1);
    for (int i = 1; i < isz(pref); ++i)
        pref[i] = pref[i - 1] + b[i - 1];

    sort(all(pref), greater<>());

    map<ll, pair<ll, ll>> mp;
    sort(all(v));
    
    for (ll &e : v)
        mp[e].first++;

    mp[0] = {0, 0};
    
    auto it = mp.begin();
    ll running_sum = 0;
    while (it != mp.end()) {
        ll key = it -> first;
        ll q = it -> second.first;
        running_sum += q;
        mp[key].second += running_sum;
        it++;
    }

    ll ans = n - distance(pref.begin(), lower_bound(all(pref), prev(mp.end()) -> second.second, greater<ll>()));

    it = next(mp.begin());
    for (auto it = next(mp.begin()); it != mp.end(); ++it) {
        if (it -> first == 1) continue; // process 1's is useless because mul = 1
        auto prv = prev(it);
        ll cnt = prev(mp.end()) -> second.second;
        ll can_attack = cnt - prv -> second.second;
        
        auto lwb_it = lower_bound(all(pref), can_attack, greater<ll>());
        ll killed_monsters = n - distance(pref.begin(), lwb_it);

        ans = max(ans, it -> first * killed_monsters);
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
