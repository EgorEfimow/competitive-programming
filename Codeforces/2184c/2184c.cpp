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

map<ll, ll> memo;

ll rec(ll n, ll t) {
    if (n == t) return 0;
    if (n == 1) return 2e9;

    if (memo.count(n))
        return memo[n];

    ll res;

    if (n % 2 == 0) {
        res = 1 + rec(n / 2, t);
    }
    else {
        res = 1 + min(rec(n / 2, t), rec((n + 1) / 2, t));
    }

    return memo[n]=res;
}

void solve() {
    memo.clear();
    ll n, t; cin >> n >> t;

    int res = rec(n, t);
    if (res > 33) cout << -1 << en;
    else cout << res << en;    
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
