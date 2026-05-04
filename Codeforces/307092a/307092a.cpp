#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    int n, m; cin >> n >> m;

    vi l(n + 1);
    vi r(m + 1);

    l.back() = 1e9 + 1;
    r.back() = 1e9 + 1;

    auto read = [](const int sz, vi &arr) {
        for (int i = 0; i < sz; ++i) {
            int v; cin >> v;
            arr[i] = v;
        }
    };

    read(n, l); read(m, r);

    vi res(n + m);

    int i = 0, j = 0;
    for (int k = 0; k < isz(res); ++k) {
        if (l[i] < r[j]) {
            res[k] = l[i];
            i++;
        }
        else {
            res[k] = r[j];
            j++;
        }
    }

    for (int &e : res)
        cout << e << " ";
    cout << en;
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