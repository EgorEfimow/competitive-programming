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
    ll n; cin >> n;
    vll v(n); cin >> v;

    auto count = [](vll &arr) -> ll {
        ll cnt_inv = 0, cnt0 = 0, s = isz(arr);

        for (int i = s - 1; i >= 0; --i) {
            if (arr[i] == 0) cnt0++;
            else cnt_inv += cnt0;
        }

        return cnt_inv;
    };

    ll ans = count(v);

    vll vleft(all(v)), vright(all(v)); 

    for (int i = 0; i < n; ++i) {
        if (vleft[i] == 0) {
            vleft[i] = 1;
            ans = max(ans, count(vleft));
            break;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (vright[i] == 1) {
            vright[i] = 0;
            ans = max(ans, count(vright));
            break;
        }
    }


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