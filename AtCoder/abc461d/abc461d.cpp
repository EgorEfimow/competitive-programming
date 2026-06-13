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

ll check(const vi &arr, const int val, vi &freq) {
    ll cnt = 0;

    freq[0] = 1;
    
    vi pref(isz(arr) + 1);
    for (int i = 1; i < isz(pref); ++i)
        pref[i] = pref[i - 1] + arr[i - 1];

    for (int i = 1; i < isz(pref); ++i) {
        if (pref[i] - val >= 0)
            cnt += freq[pref[i] - val];
        
        freq[pref[i]]++;
    }

    for (int &e : freq)
        e = 0;
        
    return cnt;
}

void solve() {
    int h, w, k; cin >> h >> w >> k;
    vector<string> v(h); cin >> v;

    vi freq(h * w + 1);

    vvi pref(h + 1, vi(w, 0));

    for (int i = 1; i < h + 1; ++i) {
        for (int j = 0; j < w; ++j) {
            pref[i][j] = pref[i - 1][j] + v[i - 1][j] - '0';
        }
    }

    ll ans = 0;
    vi pref1d(w);
    for (int i = 0; i < isz(v); ++i) {
        for (int j = i; j < isz(v); ++j) {
            for (int k = 0; k < w; ++k) {
                pref1d[k] = pref[j + 1][k] - pref[i][k];
            }

            ans += check(pref1d, k, freq);
        }
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
