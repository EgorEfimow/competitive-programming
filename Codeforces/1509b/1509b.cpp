#include <bits/stdc++.h>
#include <functional>

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

#pragma region TEMPLATES

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

#pragma endregion

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    deque<int> m, t;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'M') m.push_back(i);
        else t.push_back(i);
    }

    if (isz(m) * 2 != isz(t)) {
        cout << "NO" << en;
        return;
    }

    for (int &e : m) {
        if (t.front() < e)
            t.pop_front();
        else {
            cout << "NO" << en;
            return;
        }
    }

    for (int i = isz(m) - 1; i >= 0; --i) {
        if (t.back() > m[i])
            t.pop_back();
        else {
            cout << "NO" << en;
            return;
        }
    }
    if (isz(t) == 0) cout << "YES" << en;
    else cout << "NO" << en;
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