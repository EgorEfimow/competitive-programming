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
    ll n, m; cin >> n >> m;
    vll l(n), r(m);

    auto read = [](const int isz, vll &arr) {
        for (int i = 0; i < isz; ++i) {
            int q; cin >> q;
            arr[i] = q;
        }
    };

    read(n, l); read(m, r);

    ll left = 0, right = 0, ans = 0;
    while (left < n && right < m) {
        if (r[right] < l[left])
            right++;
        else if (r[right] > l[left])
            left++;
        else {
            ll cnt = 0;
            while (right < m && l[left] == r[right]) {
                cnt++;
                right++;
            }
            ans += cnt;
            while (left < n - 1 && l[left] == l[left + 1]) {
                ans += cnt;
                left++;
            }
        }
    }
    cout << ans << en;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;s
    while (t--) {
        solve();
    }

    return 0;
}