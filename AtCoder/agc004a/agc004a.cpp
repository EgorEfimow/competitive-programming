#include <bits/stdc++.h>

using namespace std;

#define isz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define en '\n'
#define ll long long 
#define vi vector<int>
#define vii vector<vi>
#define vll vector<ll>
#define pii pair<int, int>

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll ans;

    ans = min({abs(a / 2 * b * c - (a * b * c - a / 2 * b * c )), 
              abs(c / 2 * b * a - (a * b * c - c / 2 * b * a )),
              abs(b / 2 * c * a - (a * b * c - b / 2 * c * a ))});
            
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