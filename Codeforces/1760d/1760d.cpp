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
    vi v;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        if (i == 0 || v.back() != q) 
            v.push_back(q);
    }

    int ans = 0;

    for (int i = 0; i < isz(v); ++i) {
        if ((i == 0 || v[i - 1] > v[i]) && (i == isz(v) - 1 || v[i] < v[i + 1])) ans++;
    }

    if (ans == 1) cout << "yes" << en;
    else cout << "no" << en;
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