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

    int ans = n / 2 + n % 2;

    if (n == 1) {
        cout << 1 << en;
        cout << 1 << " " << 2 << en;
        return;
    }

    cout << ans << en;

    int steps = 3 * n;

    for (int i = 0; i < ans; ++i) {
        cout << 1 + 3 * i << " " << steps - 1 - (3 * i) << en;
    }
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