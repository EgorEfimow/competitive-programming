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
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;


    bool lo = false, hi = false;
    for (int i = 1; i <= n; ++i) {
        int dist = abs(sx - i) + abs(sy - 1);
        if (dist <= d) {
            lo = 1;
        };
    }

    for (int i = 1; i <= m; ++i) {
        int dist = abs(sx - n) + abs(sy - i);
        if (dist <= d) {
            lo = 1;
        }
    }

    for (int i = 1; i <= m; ++i) {
        int dist = abs(sx - 1) + abs(sy - i);
        if (dist <= d) {
            hi = 1;
        }
    }

    for (int i = 1; i <= n; ++i) {
        int dist = abs(sx - i) + abs(sy - m);
        if (dist <= d) {
            hi = 1;
        }
    }

    cout << ((lo & hi) ? -1 : n + m - 2) << en;

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