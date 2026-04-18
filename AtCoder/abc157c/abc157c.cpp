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

    vector<pii> v(m);
    for (auto &e : v) cin >> e.first >> e.second;

    int mi, end;
    if (n == 1) {
        mi = 0;
        end = 9;
    } 
    else if (n == 2) {
        mi = 10; end = 99;
    }
    else {
        mi = 100; end = 999;
    }

    for (int i = mi; i <= end; ++i) {
        vi q; 
        int tmp = i;
        if (i == 0) q.push_back(0);
        while (tmp) {
            int d = tmp % 10;
            q.push_back(d);
            tmp /= 10;
        }
        reverse(all(q));
        int cnt = 0;
        for (auto &e : v) {
            if (q[e.first - 1] != e.second) break;
            cnt++;
        }
        if (cnt == m) {
            cout << i << en;
            return;
        }
    }
    cout << -1 << en;
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