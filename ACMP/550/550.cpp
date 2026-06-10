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

    auto pad = [](string &str) {
        if (isz(str) == 4) return;
        string q(4 - isz(str), '0');
        str = q + str;
    };

    string y = to_string(n);
    pad(y);
    if (n % 400 == 0 || (n % 4 == 0 && n % 100)) cout << "12/09/" << y << en;
    else cout << "13/09/" << y << en;
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