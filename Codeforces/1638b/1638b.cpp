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

int cnt_bad = 0;

void solve() {
    int n; cin >> n;
    vi v(n); cin >> v;

    vi odd(n + 1, 0), even(n + 1, 1);

    for (int i = 1; i < n + 1; ++i) {
        if (v[i - 1] % 2 == 0) {
            even[i] = max(even[i - 1], v[i - 1]);
        }
        else {
            even[i] = even[i - 1];
        }
    }

    
    for (int i = 1; i < n + 1; ++i) {
        if (v[i - 1] % 2) {
            odd[i] = max(odd[i - 1], v[i - 1]);
        }
        else {
            odd[i] = odd[i - 1];
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if ((v[i] % 2 && v[i] < odd[i + 1]) || (v[i] % 2 == 0 && v[i] < even[i + 1])) {
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
