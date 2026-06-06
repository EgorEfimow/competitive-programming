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
    int n, x; cin >> n >> x;
    vi p(n); for (int &e : p) cin >> e;

    sort(all(p));

    int ans = 0, l = 0, r = n - 1;
    while (l <= r) {
        if (p[l] + p[r] <= x)
            l++;
        
        r--;
        ans++;
    }

    cout << ans << en;
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