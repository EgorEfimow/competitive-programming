#include <algorithm>
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
    ll n, k; cin >> n >> k;

    vi v(n); cin >> v;

    sort(all(v));
    vi tmp(all(v));

    v.erase(unique(all(v)), v.end());

    for (int i = 1; i < isz(v); ++i) {
        if (v[i] - v[i - 1] <= k) {
            cout << "yes" << en;
            return;
        }
    }

    int ptr = 0;
    while (ptr < isz(tmp)) {
        int q = tmp[ptr];
        int cnt = 0;
        while (ptr < isz(tmp) && tmp[ptr] == q) {
            cnt++;
            ptr++;
        }
        if (cnt % 2 == 0) {
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
