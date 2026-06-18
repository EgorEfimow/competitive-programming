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
    string s; cin >> s;

    int sz = isz(set<char>(all(s)));

    set<char> q;

    string tmp_s = s.substr(0, sz);
    if (isz(set<char>(all(tmp_s))) != sz) {
        cout << "no" << en;
        return;
    }

    for (int i = sz; i < isz(s); ++i) {
        if (s[i] != s[i - sz]) {
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
