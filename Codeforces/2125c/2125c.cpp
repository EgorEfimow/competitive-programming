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
    ll l, r; cin >> l >> r;
 
    ll cnt2 = r / 2ll - (l + 1ll) / 2ll + 1ll;
    ll cnt3 = r / 3ll - (l + 2ll) / 3ll + 1ll;
    ll cnt5 = r / 5ll - (l + 4ll) / 5ll + 1ll;
    ll cnt7 = r / 7ll - (l + 6ll) / 7ll + 1ll;

    ll cnt23 = r / 6ll - (l + 5ll) / 6ll + 1ll;
    ll cnt25 = r / 10ll - (l + 9ll) / 10ll + 1ll;
    ll cnt27 = r / 14ll - (l + 13ll) / 14ll + 1ll;
    ll cnt35 = r / 15ll - (l + 14ll) / 15ll + 1ll;
    ll cnt37 = r / 21ll - (l + 20ll) / 21ll + 1ll;
    ll cnt57 = r / 35ll - (l + 34ll) / 35ll + 1ll;

    ll cnt235 = r / 30ll - (l + 29ll) / 30ll + 1ll;
    ll cnt237 = r / 42ll - (l + 41ll) / 42ll + 1ll;
    ll cnt257 = r / 70ll - (l + 69ll) / 70ll + 1ll;
    ll cnt357 = r / 105ll - (l + 104ll) / 105ll + 1ll;

    ll cnt2357 = r / 210ll - (l + 209ll) / 210ll + 1ll;

    ll cnt = r - l + 1;
    
    cout << cnt - (cnt2 + cnt3 + cnt5 + cnt7 - cnt23 - cnt25 - cnt27 - cnt35 - cnt37 - cnt57 + cnt235 + cnt237 + cnt257 + cnt357 - cnt2357) << en;
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
