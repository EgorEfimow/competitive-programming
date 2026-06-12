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
    int n, k; cin >> n >> k;

    string s; cin >> s;

    int cnt1 = 0;
    for (char &e : s)
        if (e == '1') cnt1++;

    if (cnt1 % 2) {
        cout << "no" << en;
        return;
    }

    for (int i = 0; i < k - 1; ++i) {
        int cnt = 0;
        for (int j = i; j < n; j += k) {
            if (s[j] == '1')
                cnt++;
        }
        if (cnt % 2) {
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
