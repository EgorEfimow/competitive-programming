#include <bits/stdc++.h>
#include <limits>

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

auto find_index(const set<pii> &st, const int val) {
    auto it = st.upper_bound({val, 2e9});

    if (it == st.begin())
        return st.end();

    auto prev_it = prev(it);

    if (prev_it -> first <= val && val <= prev_it -> second)
        return prev_it;
    
    return st.end();
}

int can_add_idx(const string &str, const int pos) {
    char q = str[pos];

    if (q == '0' && pos < 2) return -1;
    if (q == '1' && pos > isz(str) - 3) return -1;

    if (q == '0' && pos == isz(str) - 1 && str[pos - 1] == '0' && str[pos - 2] == '1' && str[pos - 3] == '1')
        return pos - 3;        
    if (q == '1' && pos == 0 && str[pos + 1] == '1' && str[pos + 2] == '0' && str[pos + 3] == '0')
        return 0;
    if (pos != isz(str) - 1) {
    if (q == '0' && str[pos - 1] == '0' && str[pos - 2] == '1' && str[pos - 3] == '1')
        return pos - 3;
    if (q == '0' && str[pos + 1] == '0' && str[pos - 1] == '1' && str[pos - 2] == '1')
        return pos - 2;
    }
    if (pos != 0) {
    if (q == '1' && str[pos - 1] == '1' && str[pos + 1] == '0' && str[pos + 2] == '0')
        return pos - 1;
    if (q == '1' && str[pos + 1] == '1' && str[pos + 2] == '0' && str[pos + 3] == '0')
        return pos;
    }
    
    return -1;
}

void solve() {
    string s; cin >> s;
    int q; cin >> q;

    // build initial index
    set<pii> idx;

    for (int i = 0; i < isz(s) - 3; ++i) {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            idx.insert({i, i + 3});
    }

    for (int i = 0; i < q; ++i) {
        int pos, val; cin >> pos >> val;
        pos--;

        if (isz(s) < 4) {
            cout << "no" << en;
            continue;
        }

        auto it = find_index(idx, pos);

        char q = s[pos];
        s[pos] = val + '0';
        
        // doesnt belong to index
        if (it == idx.end()) {
            int res = can_add_idx(s, pos);
            if (res != -1)
                idx.insert({res, res + 3});

            if (!idx.empty())
                cout << "yes" << en;
            else cout << "no" << en;
        }
        else {
            if (q == val + '0') {
                cout << "yes" << en;
                continue;
            }
            idx.erase(it);
            int res = can_add_idx(s, pos);
            if (res != -1)
                idx.insert({res, res + 3});

            if (!idx.empty())
                cout << "yes" << en;
            else cout << "no" << en;
        }
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
