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
    vi v(n + 1);
    for (int i = 1; i < n + 1; ++i)
        cin >> v[i];

    auto calc = [](const vi &arr) -> pii {
        int sum_total = 0, sum_old = 0, cnt = 0;
        for (int i = 1; i < isz(arr); ++i) {
            if (sum_total + arr[i] + sum_old > 300) break;
            sum_total += arr[i] + sum_old;
            sum_old += arr[i];
            cnt++;
        }
        return {cnt, sum_total};
    };

    auto q1 = calc(v);

    reverse(v.begin() + 1, v.end());

    auto q2 = calc(v);

    sort(all(v));

    auto q3 = calc(v);

    if (q3.first >= q2.first && q3.second <= q2.second && q3.first >= q1.first && q3.second <= q1.second) {
        cout << 1 << en;
        return;
    }
    if (q1.first > q2.first || (q1.first == q2.first && q1.second < q2.second))
        cout << 5 << en;
    else cout << 3 << en;
    
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