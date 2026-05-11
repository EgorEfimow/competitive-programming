#include <algorithm>
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
    vi x(n); for (int &e : x) cin >> e;
    vi y(n); for (int &e : y) cin >> e;

    auto getDist = [&](int x1, int y1, int x2, int y2) -> ll {
        return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    };

    ll maxDist = -1;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            maxDist = max(maxDist, getDist(x[i], y[i], x[j], y[j]));
        }
    }
    cout << maxDist << en;
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