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

    int ans = 0, initpos = 0, prevcoo = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        if (((a - prevcoo) % 2 && (initpos != b)) || ((a - prevcoo) % 2 == 0 && initpos == b)) ans += a - prevcoo;
        else ans += a - prevcoo - 1;
        initpos = b;
        prevcoo = a;
    }
    ans += m - prevcoo;
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