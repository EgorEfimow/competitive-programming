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
    string s; cin >> s;

    char first = s[0], last = s.back();

    int ans = abs((first - '0') - (last - '0'));

    if (isz(s) == 2) {
        cout << ans << " 2" << en;
        cout << "1 2" << en;
        return;
    }

    // is it binary search + bruteforce?
    // we take all elements equal to the current (because price is 0)
    // no, something heap like
    // bruv, it is just max increasing/decreasing sequence with filtered values outside range [l, r]

    map<char, vi> mp;
    for (int i = 0; i < isz(s); ++i)
        mp[s[i]].push_back(i + 1);

    cout << ans << " ";

    vi res;
    res.push_back(first);
    
    if (last == first) {
        cout << isz(mp[last]) << en;
        for (int &e : mp[last])
            cout << e << " ";
        cout << en;
    }
    else if (last < first) {
        sort(s.begin() + 1, s.end() - 1, greater<>());

        for (int i = 1; i < isz(s) - 1; ++i) {
            if (s[i] > first || s[i] < last) continue;
            res.push_back(s[i]);
        }

        res.push_back(last);

        set<char> st(all(res));

        cout << isz(res) << en;

        for (auto it = st.rbegin(); it != st.rend(); ++it) {
            for (int &e : mp[*it]) {
                cout << e << " ";
            }
        }
        cout << en;
    }
    else {    
        sort(s.begin() + 1, s.end() - 1);

        for (int i = 1; i < isz(s) - 1; ++i) {
            if (s[i] < first || s[i] > last) continue;
            res.push_back(s[i]);
        }

        res.push_back(last);

        set<char> st(all(res));

        cout << isz(res) << en;

        for (auto it = st.begin(); it != st.end(); ++it) {
            for (int &e : mp[*it]) {
                cout << e << " ";
            }
        }
        cout << en;
    }
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
