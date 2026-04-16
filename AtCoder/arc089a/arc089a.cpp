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
    int curx = 0, cury = 0, prevt = 0;
    for (int i = 0; i < n; ++i) {
        int t, x, y; cin >> t >> x >> y;
        int tt = t - prevt;
        if ((tt % 2 != (abs(x - curx) + abs(y - cury)) % 2) || (tt < (abs(x - curx) + abs(y - cury)))) {
            cout << "No" << en;
            return; 
        }
        curx = x; cury = y; prevt = t;
    }
    cout << "Yes" << en;
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