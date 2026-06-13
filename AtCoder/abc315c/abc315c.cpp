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
    int n; cin >> n;
    vpii v(n);
    for (int i = 0; i < n; ++i) {
        int a, b; cin >> a >> b;
        v[i].first = b; v[i].second = a;
    }
    // sort by satisfaction
    sort(all(v));
    
    int ans = v.back().first;
    int flavor = v.back().second;

    for (int i = n - 2; i >= 0; --i) {
        if (v[i].second != flavor)
            ans = max(ans, v.back().first + v[i].first);
        else
            ans = max(ans, v.back().first + v[i].first / 2);
    }
    
    cout << ans << en;
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
