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
    int n; cin >> n;

    if (n % 2 == 0) cout << n / 2 << " " << n / 2 << en;
    else {
        string x = "", y = "";
        string tmp = to_string(n);
        int cnt = 0;
        for (int i = 0; i < isz(tmp); ++i) {
            if ((tmp[i] - '0') % 2 == 0) {
                x += to_string((tmp[i] - '0') / 2);
                y += to_string((tmp[i] - '0') / 2);
            }
            else if (cnt % 2 == 0) {
                cnt++;
                x += to_string((tmp[i] - '0' - 1) / 2);
                y += to_string((tmp[i] - '0' + 1) / 2);
            }
            else if (cnt % 2) {
                cnt++;
                x += to_string((tmp[i] - '0' + 1) / 2);
                y += to_string((tmp[i] - '0' - 1) / 2);
            }
        }
        cout << stoi(x) << " " << stoi(y) << en;
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
