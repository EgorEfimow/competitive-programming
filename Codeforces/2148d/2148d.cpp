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
    vll odd, even;
    for (int i = 0; i < n; ++i) {
        int q; cin >> q;
        if (q % 2) odd.push_back(q);
        else even.push_back(q);
    }
    sort(all(even)); sort(all(odd));

    ll ans = 0;
    if (isz(odd) == 0) {
        cout << 0 << en;
        return;
    }
    ans += odd.back();
    ans += accumulate(all(even), 0ll);
    odd.pop_back();
    
    for (int i = 0; i < isz(odd) / 2; ++i) {
        ans += odd[isz(odd) - i - 1];
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