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
    int n; cin >> n;
    vi v(n);
    for (int &e : v) cin >> e;

    sort(all(v));

    if (n < 3) {
        cout << 0 << en;
        for (int &e : v) cout << e << " ";
        cout << en;
        return;
    }

    cout << (n - 1) / 2 << en;
    for (int i = n / 2; i < ((n % 2) ? n - 1 : n); ++i) {
        cout << v[i] << " " << v[i % (n / 2)] << " ";
    }
    if (n % 2) cout << v.back() << en;
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