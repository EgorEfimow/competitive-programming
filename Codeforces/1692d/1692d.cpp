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

string pad(const int val) {
    if (val < 10) return "0" + to_string(val);
    return to_string(val);
}

bool check(const string& l, const string& r) {
    if (l[0] == r.back() && l.back() == r[0]) return true;
    return false;
}

void solve() {
    string s; cin >> s;
    int x; cin >> x;

    string q = s.substr(0, 2), w = s.substr(3, 2);
    int init_h = stoi(q);
    int init_m = stoi(w);

    int cur_h = (init_h + (init_m + x) / 60) % 24;
    int cur_m = (init_m + x) % 60;

    int cnt = 0;
    while (cur_h != init_h || cur_m != init_m) {
        string h = pad(cur_h), m = pad(cur_m);
        cnt += check(h, m);

        cur_h = (cur_h + (cur_m + x) / 60) % 24;
        cur_m = (cur_m + x) % 60;
    }

    cnt += check(pad(init_h), pad(init_m));
    
    cout << cnt << en;
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
