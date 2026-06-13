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

void solve() {
    ll  n, k, m; cin >> n >> k >> m;
    vector<pair<ll, ll>> v(n);
    
    for (int i = 0; i < n; ++i) {
        ll a, b; cin >> a >> b;
        v[i].first = b; v[i].second = a;
    }
    
    sort(all(v));

    ll sum = 0;
    set<ll> used;
    set<ll> idx;
    for (int i = n - 1; i >= 0; --i) {
        if (used.find(v[i].second) == used.end()) {
            used.insert(v[i].second);
            idx.insert(i);
            sum += v[i].first;
        }
        if (isz(used) == m) break;
    }

    ll cnt = isz(used);
    for (int i = n - 1; i >= 0; --i) {
        if (cnt == k) break;
        if (idx.find(i) == idx.end()) {
            sum += v[i].first;
            cnt++;
        }
    }
    
    cout << sum << en;
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
