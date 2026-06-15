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
    vi v(n); cin >> v;

    sort(all(v));

    if ((isz(v) == 1 && v[0] != 1) || (isz(v) >= 2 && v[0] != 1 && v[1] != 1)) {
        cout << "no" << en;
        return;
    }
    
    ll pref_sum = 1;
    for (int i = 1; i < isz(v); ++i) {
        if (v[i] <= pref_sum) {
            pref_sum += v[i];
        }
        else {
            cout << "no" << en;
            return;
        }
    }
    
    cout << "yes" << en;
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
