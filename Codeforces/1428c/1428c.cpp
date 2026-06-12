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

    stack<int> st;
    set<int> to_delete;
    for (int i = 0; i < isz(s); ++i) {
        if (s[i] == 'A')
            st.push(i);
        else {
            if (st.empty()) continue;
            to_delete.insert(st.top());
            to_delete.insert(i);
            st.pop();
        }
    }

    string ns = "";
    for (int i = 0; i < isz(s); ++i) {
        if (to_delete.find(i) != to_delete.end()) continue;
        ns.push_back(s[i]);
    }

    string res = "";
    to_delete.clear();
    for (int i = 0; i < isz(ns) - 1; ++i) {
        if (ns[i] == 'B' && ns[i + 1] == 'B') {
            to_delete.insert(i);
            to_delete.insert(i + 1);
            i++;
        }
    }

    for (int i = 0; i < isz(ns); ++i) {
        if (to_delete.find(i) != to_delete.end()) continue;
        res.push_back(s[i]);
    }
    
    int ans = isz(res);
        
    cout << ans << en;
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
